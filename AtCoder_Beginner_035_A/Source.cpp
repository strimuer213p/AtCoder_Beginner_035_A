/*
��蕶
�����N�͉�ʂ̕��� W �A������ H �̃e���r�������Ă��܂��B
���̃e���r�̉�ʃA�X�y�N�g�� W:H �� 4:3 �� 16:9 �����肵�Ă��������B
*/

#include<iostream>

int main() {
	int width, height;
	std::cin >> width >> height;

	if ((0 == width % 16) && (0 == height % 9)) {
		std::cout << "16:9" << std::endl;
	}else if ((0 == width % 4) && (0 == height % 3)) {
		std::cout << "4:3" << std::endl;
	}

	return 0;
}