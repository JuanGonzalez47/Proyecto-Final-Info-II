#ifndef SPRITE_H
#define SPRITE_H

#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsScene>

class sprite : public QGraphicsPixmapItem {
public:
  
    sprite(QString name_image, int _sprite_x, int _sprite_y, int _sprite_width, int _sprite_height,qreal _pos_x,qreal _pos_y);
    sprite(QString name_image);
    
    QPixmap set_sprite_for_animation(unsigned int pos_x,unsigned int pos_y, unsigned int value,unsigned int width, unsigned int height);
  
    sprite();
    ~sprite();

    void moveImage(int dx, int dy);


    void setSprite();
    QPixmap SetSprite(unsigned int tipo_imagen);
    void setAttributes(int _sprite_y,int _width,int n_image);
    void setCont(int _cont);
    void setN_image(int n);


    void moveParabolic(int x_inicial,int y_inicial);

    int getCont();
    qreal gety();
    qreal getx();

private:
    qreal x;
    qreal y;
    QPixmap spriteSheet, fondo_nivel_2, pantalla_inicio, pantalla_carga_nivel_2, pantalla_final, personaje_principal_mov_r, personaje_principal_mov_l, helicoptero_enemigo, helicoptero_enemigo_1, helicoptero_amigo, telefono, llantas, sangre, misiles, misil_1, misil_2, numeros, time, explosion_1, explosion_2, game_over, mensaje, salto_D, salto_I, muerte, muerte_mirror, firme, punto, corazon, mensaje_2;
    QPixmap sprit,copy;
    int sprite_x;
    int sprite_y;
    int sprite_width;
    int sprite_height;
    int n_image=7;
    int cont = 0;
    double t=0;
};

#endif // SPRITE_H
