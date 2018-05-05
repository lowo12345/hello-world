#ifndef KEYQ_H
#define KEYQ_H
#include <fstream>
#include <QPainter>
#include <QRect>
#include <QBrush>
#include <QFont>
#include <QDebug>
#include <QMainWindow>
#include <QWidget>
#include <QKeyEvent>
#include <QString>

namespace Ui {
class MainWindow;
}

class Character
{

 char  ch[100];
 char* left;  //如果内存超出限制则此指针指向新申请的内存
 char* right;
 char c;

public:
    Character();
    void Display(QPainter &paint);


   void save(char c);
   QString display();
private:
};



#endif // KEYQ_H

