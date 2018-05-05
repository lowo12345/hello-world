#include "character.h"
#include <QString>
Character::Character()
{
        int i=0;
        for(i=0;i<100;i++)
          ch[i]='0';
        qDebug()<<"initok";


}

void Character::save(char c)
{
    int i=0;
    for(i=0;ch[i]!='0';i++);
       ch[i]=c;

}

QString Character::display()
{
    QString str;
    int i=0;
    for(i=0;ch[i]!='0';i++);

    str=ch[i];
    return str = QString::fromLocal8Bit(ch,i);;
}

void Character::Display(QPainter &paint){
   // paint.drawText(rect(), Qt::AlignCenter, "Q.printqa");
   // for(int i=0;i<20;i++)
    //    character[i]->Display(paint);

}
