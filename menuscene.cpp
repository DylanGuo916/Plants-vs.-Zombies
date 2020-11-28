#include "menuscene.h"
#include "imagemanager.h"
static ImageManager *imageManager = ImageManager::getImageManager();

MenuScene::MenuScene()
    :QGraphicsScene(0,0,900,600),
      background(new QGraphicsPixmapItem(imageManager->load("interface/SelectorBackground.png"))),
      adventureShadow (new QGraphicsPixmapItem(imageManager->load("interface/SelectorAdventureShadow.png"))),
//      adventureButton (new HoverChangedPixmapItem (imageManager->load("interface/SelectorAdventureButton.png"))),
      survivalShadow  (new QGraphicsPixmapItem    (imageManager->load("interface/SelectorSurvivalShadow.png"))),
//      survivalButton  (new HoverChangedPixmapItem (imageManager->load("interface/SelectorSurvivalButton.png"))),
      challengeShadow (new QGraphicsPixmapItem    (imageManager->load("interface/SelectorChallengeShadow.png"))),
//      challengeButton (new HoverChangedPixmapItem (imageManager->load("interface/SelectorChallengeButton.png"))),
      woodSign1       (new QGraphicsPixmapItem    (imageManager->load("interface/SelectorWoodSign1.png"))),
      woodSign2       (new QGraphicsPixmapItem    (imageManager->load("interface/SelectorWoodSign2.png"))),
      woodSign3       (new QGraphicsPixmapItem    (imageManager->load("interface/SelectorWoodSign3.png"))),
//      zombieHand      (new MoviePixmapItem        ("interface/SelectorZombieHand.gif")),
//      quitButton      (new MouseEventRectItem     (QRectF(0, 0, 79, 53))),
//      usernameText    (new TextItemWithoutBorder  (gMainView->getUsername())),
      backgroundMusic(new QMediaPlayer(this)),
      buttonBleep(new QMediaPlayer(this))
{
    addItem(background);

}
