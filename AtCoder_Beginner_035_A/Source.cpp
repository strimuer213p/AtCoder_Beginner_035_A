/*
問題文
高橋君は画面の幅が W 、高さが H のテレビを持っています。
このテレビの画面アスペクト比 W:H が 4:3 か 16:9 か判定してください。
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