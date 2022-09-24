#include <iostream>

using namespace std;

int BuyDrink(int cash);
int insertcoin();
int SelectDrink();
int insertcoin_1();
void menu(int cash);
int ddrink_num;
int insertcash;
int cash;
bool sys = true;

int main() {
	insertcoin();
	while(sys)
	{

		menu(insertcash);

		SelectDrink();

		BuyDrink(insertcash);

	}
}

int insertcoin()
{
	int cash;
	cout << "동전을 투입하세요" << endl;
	cin >> cash;
	cout << "투입금액:" << cash << endl;
	return insertcash=cash;
}

void menu(int cash)
{
	cout << "잔액:" << cash << endl;
	cout << "===================================================" << endl;
	cout << "1.콜라 2.사이다 3.환타  4.커피 5.물 6.종료" << endl;
	cout << "1200   1200     1000    700    500" << endl;
	cout << "===================================================" << endl;
}

int SelectDrink()
{
	int drink_num;
	cout << "음료를 선택하세요.(6:종료)" << endl;
	cin >> drink_num;
	return ddrink_num=drink_num;
}
int BuyDrink(int cash)
{
	switch (ddrink_num)
	{
		case 1:
			if (cash >= 1200){
				cout << "" << endl;
				cout << "콜라를 선택하였습니다." << endl;
				cout << "결제가 완료되었습니다. 음료를 가져가세요" << endl;
				cout << "" << endl;
				cash -= 1200;
				cout << "남은 금액:" << cash << endl;
				insertcash = cash;
				break;
			}
			else {
				cout << "금액이 부족합니다." << endl;
				insertcoin_1();
				break;
			}
			break;
		case 2:
			if (cash >= 1200) {
				cout << "" << endl;
				cout << "사이다를 선택하였습니다." << endl;
				cout << "결제가 완료되었습니다. 음료를 가져가세요" << endl;
				cout << "" << endl;
				cash -= 1200;
				cout << "남은 금액:" << cash << endl;
				insertcash = cash;
				break;
			}
			else {
				cout << "금액이 부족합니다." << endl;
				insertcoin_1();
				break;
			}
			break;
		case 3:
			if (cash >= 1000) {
				cout << "" << endl;
				cout << "환타를 선택하였습니다." << endl;
				cout << "결제가 완료되었습니다. 음료를 가져가세요" << endl;
				cout << "" << endl;
				cash -= 1000;
				cout << "남은 금액:" << cash << endl;
				insertcash = cash;
				break;
			}
			else {
				cout << "금액이 부족합니다." << endl;
				insertcoin_1();
				break;
			}
			break;
		case 4:
			if (cash >= 700) {
				cout << "" << endl;
				cout << "커피를 선택하였습니다." << endl;
				cout << "결제가 완료되었습니다. 음료를 가져가세요" << endl;
				cout << "" << endl;
				cash -= 700;
				cout << "남은 금액:" << cash << endl;
				insertcash = cash;
				break;
			}
			else {
				cout << "" << endl;
				cout << "금액이 부족합니다." << endl;
				cout << "" << endl;
				insertcoin_1();
				break;
			}
			break;
		case 5:
			if (cash >= 500) {
				cout << "" << endl;
				cout << "물을 선택하였습니다." << endl;
				cout << "결제가 완료되었습니다. 음료를 가져가세요" << endl;
				cout << "" << endl;
				cash -= 500;
				cout << "남은 금액:" << cash << endl;
				insertcash = cash;
				break;
			}
			else {
				cout << "금액이 부족합니다." << endl;
				insertcoin_1();
				break;
			}
			break;	
		case 6:
			cout << "남은 금액을 반환합니다.(남은금액:" << cash << ")" << endl;
			sys = false;
			break;
		default:
			cout << "" << endl;
			cout << "잘못 입력되었습니다." << endl << "다시 입력해주세요." << endl;
			cout << "" << endl;
			while (sys)
			{

				menu(insertcash);

				SelectDrink();

				BuyDrink(insertcash);

			}
			break;
	}
	return cash;
}

int insertcoin_1()
{
	int cash;
	cout << "동전을 투입하세요" << endl;
	cin >> cash;
	cout << "투입금액:" << cash << endl;
	return insertcash = insertcash + cash;
}