#pragma once
#include <fstream>
#include <iostream>
using namespace std;
 
int RunTest() {

    char data[100];
  
    // �Զ�ģʽ���ļ�
    ifstream infile; 
    infile.open("resources/textures/test.png"); 

    // �رմ򿪵��ļ�
    infile.close();
 
    return 0;
}
