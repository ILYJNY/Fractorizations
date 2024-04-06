//
// Created by Backup on 2024-03-24.
//

#include "random"
#include "iostream"
#define ulld unsigned long long int


using namespace std;

ulld random_custom_ulld(ulld m, ulld n) {
    random_device rd;//시드값을위한 random_device 생성
    mt19937 gen(rd());//random_device를 통해 난수 생성 엔진을 초기화한다
    uniform_int_distribution<ulld> dis((ulld) m, (ulld) n);//균등분포 정의
    auto result = (ulld) dis(gen);
    //printf("%s %llu\n","result_random : " ,result);
    return result;
}