#include "Header.h"

std::vector<double> Math_c::filter(std::vector<double> signal) {
	std::vector<double> out;
	std::vector<double> filtered(signal.size());
	const int N = 72; //Длина фильтра
	long double Fd = 5; //Частота дискретизации входных данных
	long double Fs = 0.05; //Частота полосы пропускания
	long double Fx = 30; //Частота полосы затухания

	long double H[N] = { 0 }; //Импульсная характеристика фильтра
	long double H_id[N] = { 0 }; //Идеальная импульсная характеристика
	long double W[N] = { 0 }; //Весовая функция

	//Расчет импульсной характеристики фильтра
	double Fc = (Fs + Fx) / (2 * Fd);

	for (int i = 0; i < N; i++)
	{
		if (i == 0) H_id[i] = 2 * M_PI * Fc;
		else H_id[i] = sinl(2 * M_PI * Fc * i) / (M_PI * i);
		// весовая функция Блекмена
		W[i] = 0.42 - 0.5 * cosl((2 * M_PI * i) / (N - 1)) + 0.08 * cosl((4 * M_PI * i) / (N - 1));
		H[i] = H_id[i] * W[i];
	}

	//Нормировка импульсной характеристики
	double SUM = 0;
	for (int i = 0; i < N; i++) SUM += H[i];
	for (int i = 0; i < N; i++) H[i] /= SUM; //сумма коэффициентов равна 1 

	
	//Фильтрация входных данных
	for (int i = 0; i < signal.size(); i++)
	{
		filtered[i] = 0.;
		for (int j = 0; j < N - 1; j++)// та самая формула фильтра
			if (i - j >= 0)
				filtered[i] += H[j] * signal[i - j];
	}

	out.resize(filtered.size());
	std::copy(filtered.begin(), filtered.end(), out.begin());
	
	
	if (!out.empty())
		out.erase(out.begin(), out.begin() + 350);
	

	return out;
}

std::vector<double> Math_c::Diff(std::vector<double> signal) {
	std::vector<double> out;
	for (size_t i = 0; i < signal.size() - 1; i++)
		out.push_back(signal[i + 1] - signal[i]);
	return out;
}

double Math_c::median(std::vector<double> signal)
{
	std::vector<double> signal_m(signal.size());
	std::copy(signal.begin(), signal.end(), signal_m.begin());

	size_t n = signal_m.size() / 2;
	nth_element(signal_m.begin(), signal_m.begin() + n, signal_m.end());

	return signal_m[n];
}


std::vector<double> Math_c::get_max_point(std::vector<double> signal,const float time) {

	std::vector<double> index;
	double dev = get_standard_deviation(signal);
	for (size_t i = 1; i < signal.size() - 1; i++) {
		if (signal[i] < 0 || signal[i] < dev)
			continue;
		if (signal[i + 1] < signal[i] && signal[i] > signal[i - 1] ) {			
			index.push_back((int)i*time);			
		}
	}
	return index;
}

std::tuple <std::vector<double>, std::vector<double>, std::vector<double>> Math_c::get_max_point_pair(std::vector<double> signal, const float time)
{
	std::vector<double> index , max_points,min_points_time;
	double dev = get_standard_deviation(signal);
	for (size_t i = 1; i < signal.size() - 1; i++) {
		if (signal[i] < 0 || signal[i] < dev)
			continue;
		if (signal[i + 1] < signal[i] && signal[i] > signal[i - 1]) {
			index.push_back((int)i * time);
			max_points.push_back(signal[i]);
		}
	}
	size_t j = 0;
	for (size_t i = 0; i < signal.size(); i++) {
		if (signal[i] == 0)
		{
			while (j < index.size()) {
				if (i > index[j]) {
					min_points_time.push_back((int)i * time);
					j++;
				}
			}
		}					
	}


	return std::make_tuple(index, max_points, min_points_time);
}

double Math_c::get_standard_deviation(std::vector<double> signal) {
	double sum, mean, sq_sum, stdev;
	sum = std::accumulate(signal.begin(), signal.end(), 0.0);
	mean = sum / signal.size();

	std::vector<double> diff(signal.size());
	std::transform(signal.begin(), signal.end(), diff.begin(), [mean](double x) { return x - mean; });

	sq_sum = std::inner_product(diff.begin(), diff.end(), diff.begin(), 0.0);
	stdev = std::sqrt(sq_sum / signal.size());

	return stdev;
}


std::vector<double> Math_c::get_different(std::vector<double> one, std::vector<double> two) {
	std::vector<double> get_result;

	size_t size_one = one.size();
	size_t size_two = two.size();

	if (size_one > size_two)
		for (size_t i = 0; i < size_two; i++)
			get_result.push_back(one[i] - two[i]);
	else
		for (size_t i = 0; i < size_one; i++)
			get_result.push_back(one[i] - two[i]);

	return  get_result;
}

std::vector<double> Math_c::get_different_ri(std::vector<double> one, std::vector<double> two) {
	std::vector<double> get_result;

	size_t size_one = one.size();
	size_t size_two = two.size();

	if (size_one > size_two)
		for (size_t i = 0; i < size_two; i++)
			get_result.push_back(one[i] / two[i]);
	else
		for (size_t i = 0; i < size_one; i++)
			get_result.push_back(one[i] / two[i]);

	return  get_result;
}