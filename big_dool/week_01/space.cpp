/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 22:35:29 by donchoi           #+#    #+#             */
/*   Updated: 2023/01/02 22:54:18 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int a[10000000];

void f() {
	int b[1004];
}

int main() {
	/**
	 * 공간복잡도
	 * 입력크기에 대해 어떤 알고리즘이 실행되는데 필요한 메모리 공간의 양
	 * 이는 정적변수로 선언된 것 말고도 동적으로 재귀적인 함수로 인해 공간을 계속해서 필요로 하는 경우도 포함함.
	 * array든, map이든, set이든 요소를 담은 공간이면 다 적용됨.
	 * 단, 재귀의 경우 계산이 복잡해서 계산에서 뺀다고 함.
	 * 
	 * 사실 공간복잡도는 문제를 푸는데 잘 사용되지 않음.
	 * 보통 문제를 풀 때 배열의 범위를 잡을 때는 2가지의 방법으로 잡음.
	 * 
	 * 1. 최대범위
	 * 대부분은 문제의 범위를 최대범위를 기반으로 배열을 미리 만들곤 함.
	 * int a[10000000000]의 경우는 10000000000의 공간을 차지함.
	 * 
	 * 2. 메모리 제한
	 * 사실 실전에서는 사용하기가 힘듬.
	 * 보통 일반적으로 1000만정도까지 된다고 생각하면 편함.
	*/
	return 0;
}