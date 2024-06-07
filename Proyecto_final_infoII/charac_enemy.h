    # include "characters.h"
#include <QTimer>


#ifndef CHARAC_ENEMY_H
#define CHARAC_ENEMY_H

class enemy : public charac{

private:

    sprite *sprite_enemy_rifle;
    int n_ran=5;
    int mov_ran=0;
public:

    enemy(qreal _x,qreal _y,int _life,int _bullets,int _speed, QGraphicsScene *_scene);
    enemy();

    void moveUpEnemy();
    void moveDownEnemy();
    void moveRihgtEnemy();
    void moveLeftEnemy();
    void shoot(QTimer *t_move, QTimer *t_enemy_shoot);

    void deadEnemy();

    void setMovRan(int n);
    void setN_ran(int _n_ran);
    void sumMovran();

    int getN_ran();
    int getMov_ran();

    int getX();
    int getY();
    sprite* getSprite_rifle();


};


#endif // CHARAC_ENEMY_H
