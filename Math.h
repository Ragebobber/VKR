#pragma once

class Math_c
{
public:
	std::vector<double> Diff(std::vector<double> signal);
	std::vector<double> filter(std::vector<double> signal);
	double median(std::vector<double> v);
	std::vector<double> get_max_point(std::vector<double> signal, const float time);
	std::vector<double> get_different(std::vector<double> one, std::vector<double> two);
	double get_standard_deviation(std::vector<double> signal);
	std::vector<double> get_different_ri(std::vector<double> one, std::vector<double> two);
	std::tuple <std::vector<double>, std::vector<double>, std::vector<double>> get_max_point_pair(std::vector<double> signal, const float time);

	std::vector<double> uho_c;
	std::vector<double> uho_cdiff;

	std::vector<double> pal_c;
	std::vector<double> pal_cdiff;

	std::vector<double> uho_cdiff_max;
	std::vector<double> pal_cdiff_max;

	std::vector<double> pal_max_points_amplitude;

	std::vector<int> USART_P;
	std::vector<double> USART_U;
	std::vector<double> USART_ECG;


	double U;
	//¬€зкость
	double amlitude_palec_signal;
	double time_zond;
private:

};

