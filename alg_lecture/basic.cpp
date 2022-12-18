﻿#include <bits/stdc++.h> // C++의 모든 표준 라이브러리가 담긴 헤더파일을 불러온다.
using namespace std;
/**
 * std라는 네임스페이스를 사용한다.
 * 
 * 네임 스페이스란?
 * 많은 변수나 라이브러리를 불러서 사용하면 변수명이 중복될 수 있는데, 이를 방지하기 위해서 변수명에 범위를 걸어놓은 것
 * cin이나 cout등을 사용할 떄 원래는 std라는 네임스페이스를 통해 std::cin 이렇게 호출을 해야하는데
 * std를 기본으로 설정해서 cin, cout으로 간단하게 호출할 수 있다.
*/

int main() {
	string a; // 문자열 변수 선언
	cin >> a; // C의 scanf()와 같음
	cout << a << "\n"; // C의 printf()와 같음
	return 0; // 정상종료, 비정상이면 1
}
