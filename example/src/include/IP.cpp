/*
RRST-NHK-Project 2025
宛先IPアドレスを一括で設定する
*/

#include "IP.hpp"

// 標準
#include <iostream>

// 送信先IPアドレス、宛先マイコンで設定したIPv4アドレスを指定
const std::string IP_test = "192.168.0.122";

// 送信先ポート番号、宛先マイコンで設定したポート番号を指定
const int PORT_test = 5000;