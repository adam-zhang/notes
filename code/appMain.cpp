/*************************************************************************
    > File Name: appMain.cpp
    > Author: Mingping (Adam) Zhang
    > Mail: mingpingzhang@163.com 
    > Created Time: 2015- 7月-21 09时07分10秒
 ************************************************************************/
#include <QApplication>
#include "MainWindow.h"
#include "hello.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	MainWindow w;
	w.show();
	return app.exec();
}
