#include <iostream>
// Подключаем библиотеку для повышения точности float
// Поскольку в Задании 1 в контрольном примере ответ дан с точностью до 6 знака после точки
// В задании 6 понижаем точность до двух знаков после точки как в контрольном примере
#include <iomanip>
using namespace std;

int main() {
	setlocale(0, "rus");

	//1.1
	float R1, R2, R3;
	cout << "Вычисление общего сопротивления R0 трех параллельно соединенных резисторов R1, R2, R3.\nВведите значения R1, R2, R3 ->" << endl;
	cin >> R1 >> R2 >> R3;
	(R1 < 0 or R2 < 0 or R3 < 0) ? (cout << "Ошибка. Вы ввели несуществующее значение(я).") : (R1 == 0 or R2 == 0 or R3 == 0) ? (cout << "Общее сопротивление R0 = 0") : (cout << setprecision(7) << "Общее сопротивление R0 = " << (1 / (1 / R1 + 1 / R2 + 1 / R3)));

	//1.2
	float const pi = 3.14;
	float L;
	cout << "Вычисление площади круга S.\nВведите длину окружности L ->" << endl;
	cin >> L;
	(L < 0) ? (cout << "Ошибка. Вы ввели несуществующее значение.") : (cout << "Площадь круга S = " << (L * L / (4 * pi)));

	//1.3
	float v, t, a;
	cout << "Вычисление пройденного расстояния при прямолинейном равноускоренном движении.\nВведите v – скорость, t – время, а – ускорение ->" << endl;
	cin >> v >> t >> a;
	(v < 0 or t < 0 or a < 0) ? (cout << "Ошибка. Вы ввели несуществующее значение(я).") : (cout << "Пройденное расстояние S = " << (t * (v + (a * t) / 2)));

	//2.1
	int n_time, hours, minutes, seconds;
	int const seconds_in_hour = 3600, seconds_in_minute = 60;
	cout << "Преобразование секунд в часы, минуты, секунды.\nВведите время в секундах ->" << endl;
	cin >> n_time;
	if (n_time < 0) cout << "Ошибка. Время не может быть отрицательным числом!";
	else {
		hours = n_time / seconds_in_hour;
		minutes = (n_time % seconds_in_hour) / seconds_in_minute;
		seconds = n_time % seconds_in_hour % seconds_in_minute;
		cout << hours << " час/-а/-ов " << minutes << " минут/-а/-ы " << seconds << " секунд/-а/-ы";
	}

	//2.2
	float num;
	int grivni, kopeiki;
	cout << "Преобразование дробного числа в денежный формат.\nВведите число ->" << endl;
	cin >> num;
	if (num < 0) cout << "Ошибка! Вы ввели невозможное значение.";
	else {
		grivni = (int)num;
		kopeiki = (num - grivni) * 100;
		cout << grivni << " грн. " << kopeiki << " коп.";
	}

	//2.3
	float distance, time, seconds, speed;
	int minutes, allseconds;
	float const ms_to_kph = 3.6;
	int const seconds_in_minute = 60;
	cout << "Вычисление скорости бега\nВведите длину дистанции (метров) = ";
	cin >> distance;
	cout << "Введите время (мин.сек) = ";
	cin >> time;
	if (distance < 0 or time <= 0) cout << "Ошибка! Вы ввели невозможные значения.";
	else {
		minutes = (int)time;
		seconds = (time - minutes) * 100;
		allseconds = seconds + minutes * seconds_in_minute;
		speed = distance / allseconds * ms_to_kph;
		cout << "Дистанция: " << distance << " м" << endl;
		cout << "Время: " << minutes << " мин " << seconds << " сек = " << allseconds << " сек" << endl;
		cout << "Вы бежали со скоростью " << setprecision(4) << speed << " км/ч";
	}

	//2.4
	float callprice, time, fullprice, seconds_to_min;
	int grivni, minutes, kopeiki;
	int const seconds_in_minute = 60;
	cout << "Расчет стоимости звонка.\nВведите стоимость одной минуты (грн.коп) и время разговора (мин.сек) ->" << endl;
	cin >> callprice >> time;
	if (callprice < 0 or time < 0) cout << "Ошибка! Вы ввели невозможные значения.";
	else {
		minutes = (int)time;
		seconds_to_min = (time - minutes) * 100 / seconds_in_minute;
		fullprice = callprice * (minutes + seconds_to_min);
		grivni = fullprice;
		kopeiki = (fullprice - grivni) * 100;
		cout << grivni << " грн. " << kopeiki << " коп.";
	}

	//2.5
	int n_time, weeks, days;
	int const days_in_week = 7;
	cout << "Преобразование дней в недели и дни.\n	Введите количество дней ->" << endl;
	cin >> n_time;
	if (n_time < 0) cout << "Ошибка! Вы ввели невозможное значение.";
	else {
		weeks = n_time / days_in_week;
		days = n_time % days_in_week;
		cout << weeks << " недели " << days << " дня";
	}
}