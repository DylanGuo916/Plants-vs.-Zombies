#ifndef MENUSCENE_H
#define MENUSCENE_H

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QtMultimedia>

class MenuScene : public QGraphicsScene
{
    Q_OBJECT
public:
    MenuScene();
//    virtual bool eventFilter(QObject *watched, QEvent *event) override;
//    void loadReady();
private:
    QGraphicsPixmapItem *background;
    QGraphicsPixmapItem *adventureShadow;

    QGraphicsPixmapItem *survivalShadow;

    QGraphicsPixmapItem *challengeShadow;

    QGraphicsPixmapItem *woodSign1;
    QGraphicsPixmapItem *woodSign2;
    QGraphicsPixmapItem *woodSign3;

    QMediaPlayer *backgroundMusic;
    QMediaPlayer *buttonBleep;

};


#endif // MENUSCENE_H
