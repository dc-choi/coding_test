﻿/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:27:03 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/21 15:49:26 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * int
	 * 4바이트짜리 정수를 사용할 때 쓰입니다.
	 * 표현범위는 -2,147,483,648 ~ 2,147,483,647이며 예상값이 이를 넘어가면 long long을 쓰는 것을 권고합니다.
	 * 
	 * 문제를 풀때는 이상한 문제가 아니라면 int의 최대값으로 987654321 또는 1e9를 씀
	 * 이는 연산이 일어날 때 오퍼플로우를 방지할 수 있기 때문입니다.
	*/
	const int INF = 987654321;
	const int INF2 = 1e9;
	
	/**
	 * 참고로 const는 수정할 수 없는 변수라는 의미를 가지고 있습니다.
	 * C++을 사용한다면 const를 많이 사용하게 됩니다.
	*/

	/**
	 * 오버플로우
	 * 타입의 허용범위를 초과할 때 발생하는 에러
	 * 
	 * 언더플로우
	 * 타입의 허용범위 밑으로 작아질 때 발생하는 에러
	*/

	int a = 2147483647;
	int b = -2147483648;
	a++;
	b--;

	cout << a << "\n"; // -2147483648
	cout << b << "\n"; // 2147483647

	return 0;
}