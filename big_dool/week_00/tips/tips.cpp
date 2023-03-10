/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tips.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:31:11 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 17:48:20 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int tree[10000000]; // 잘됨.

// 코딩테스트에서의 팁이다. 실제 SW공학과 맞지않는 부분이 있을 수 있음.
int main() {
	/**
	 * 1. 지역변수보다는 전역변수를
	 * 지역변수는 stack에 할당이 되고 예측할 수 없는 쓰레기값이 할당됨.
	 * 전역변수는 BSS OR Data segment에 들어가면서 값을 초기화 하지 않은 경우 0으로 초기화가 됨.
	 * 지역변수로 선언하게 되면 stack에 쌓이는데, 이 때 OS에서 성능상의 이유로 stack영역에 메모리 제한을 검.
	 * 그렇기 때문에 많은 배열을 선언하지 못함.
	*/
	// 보통 지역변수 int형 배열은 25만까지 가능함.
	// int tree[10000000]; // 런타임에서 오류나옴 (종료 코드: 3221225725)

	/**
	 * 2. 변수명을 간결하게
	 * 코딩테스트는 주어진 시간내에 문제를 빠르게 그리고 잘 푸는 것이 핵심이다.
	 * 명심하고 또 명심하고 계속 명심해야 한다. 그렇기 때문에 항상 변수명을 간결하게 써야함.
	 * count는 cnt, result는 ret으로 하는 등 변수명을 짧게 써야 함.
	 * 문제에서 일곱난쟁이라고 했다고 sevenDwarf 이런식으로 변수명을 짜는 것도 시간 아까움.
	 * 변수명 생각하는 시간, 변수명 치면서 낭비되는 시간이 너무 아까움.
	*/

	/**
	 * 3. 배열의 경우 조금 더 넓게
	 * 예를 들어 int형 10000의 최대범위를 가지는 문제가 있다면 이런식으로 4나 3정도의 여유공간을 주는게 좋음.
	 * 이를 통해 오버플로우에 대한 신경을 덜 쓰게 만듬.
	 * 즉, 정의한 배열의 최대 범위를 초과하게 되는 것을 방지하기 위한 방법임.
	*/
	// int a[10004];
	// int b[14][14];

	/**
	 * 4. 최솟값, 최대값의 초기값은 문제의 답 범위 밖에서
	 * 문제의 답의 범위가 만약 -1000 ~ 1000이고 최솟값을 구하라는 문제가 있습니다.
	 * 그렇다면 메인 로직은 ret = min(ret, val) 이런식으로 ret을 갱신하는 것일겁니다.
	 * 초기 ret은 1004 이런식으로 문제의 답의 범위 밖에서 잡는게 중요함.
	*/

	/**
	 * 5. 빠른 속도로 코딩하기
	 * 코딩테스트는 시간을 가르는 시험임.
	 * 빠르게 코딩을 하는 것은 전체적으로 문제를 다 푸는데 도움이 됨.
	 * 아래의 사이트를 가면 타이핑을 연습할 수 있음.
	 * https://www.typingtest.com/
	*/

	/**
	 * 6. 외워야 할 숫자
	 * 시간복잡도를 어림잡아 계산할 때 자주 나오는 수들
	 * 10! = 3628800
	 * 2^10 = 1024
	 * 3^10 = 59049
	*/

	return 0;
}