#include "mainview.h"
#include "menuscene.h"
#include "gamescene.h"
#include <QtCore>

MainView::MainView()
    : width(900), height(600),
      username("Global/Username"),
      menuScene(nullptr), gameScene(nullptr)
{
    setMouseTracking(true);
    setRenderHint(QPainter::Antialiasing, true);
    setRenderHint(QPainter::TextAntialiasing, true);
    setRenderHint(QPainter::SmoothPixmapTransform, true);
    setFrameStyle(0);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setMinimumSize(width, height);

    // set username of the all scenes
    if(getUsername().isEmpty()){
        QString username = qgetenv("USER"); // Linux or Mac
        if (username.isEmpty())
            username = qgetenv("USERNAME"); // Windows
        if (username.isEmpty())
            username = tr("Guest");
        setUsername(username);
    }
}


MainView::~MainView()
{
    if(menuScene)
        menuScene->deleteLater();
    if(gameScene)
        gameScene->deleteLater();
}

QString MainView::getUsername() const
{
    return QSettings().value(username, "").toString();
}

void MainView::setUsername(const QString &usernameSetInMenuScene)
{
    return QSettings().setValue(username, usernameSetInMenuScene);
}


void MainView::switchToMenuScene()
{
    MenuScene *newMenuScene = new MenuScene();
    setScene(newMenuScene);
    if (menuScene)
        menuScene->deleteLater();
    menuScene = newMenuScene;

}

void MainView::switchToGameScene()
{
    GameScene *newGameScene = new GameScene();
    setScene(newGameScene);
    if(gameScene)
        gameScene->deleteLater();
    gameScene = newGameScene;
}








