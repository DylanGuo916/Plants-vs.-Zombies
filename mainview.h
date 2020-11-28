#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QGraphicsView>
#include "gamescene.h"
#include "menuscene.h"

class MainView : public QGraphicsView
{
public:
    explicit MainView();
    ~MainView() override;
    QString getUsername() const;
    void setUsername(const QString &usernameSetInMenuScene);
    void switchToMenuScene();
    void switchToGameScene();

private:
    const int width;
    const int height;
    const QString username;
    MenuScene *menuScene;
    GameScene *gameScene;
};

extern MainView *gMainView;
#endif // MAINVIEW_H
