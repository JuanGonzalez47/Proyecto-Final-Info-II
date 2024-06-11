
#include "characters.h"


charac::charac(int _life,int _bullets,int _speed,qreal _x,qreal _y){



    x=_x;
    y=_y;
    life=_life;
    bullets=_bullets;
    speed=_speed;
}

charac::charac()
{
    //inicializar constructor por defecto
}


void charac::methodCharacter(sprite *method){

    method->setSprite();

}

void charac::moveUpCharacter(sprite *move){

    move->moveImage(0,-(speed*1.2));
    move->setSprite();


}

void charac::moveDownCharacter(sprite *move){

    move->moveImage(0,speed*1.2);
    move->setSprite();
}

void charac::moveLeftCharacter(sprite *move){

    move->moveImage(-(speed-3),0);
    move->setSprite();

}

void charac::moveRightCharacter(sprite *move){

    move->moveImage(speed,0);
    move->setSprite();
}

int charac::get_life()
{
    return life;
}

void charac::set_life(int _life)
{
    life = _life;
}

void charac::set_bullets(int _bullets)
{
    bullets = _bullets;

}

void charac::setSpeed(){
    speed*=-1;
}

void charac::setLife(int n){

    life-=n;

}

void charac::setBullets(unsigned int n){

    bullets = n;

}

void charac::setBullets(int n){

    bullets += n;

}

int charac::getLife()
{
    return life;
}

int charac::getBullets(){

    return bullets;

}

int charac::getSpeed(){

    return speed;

}




