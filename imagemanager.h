#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H

#include <QtCore>
#include <QPixmap>

//singleton
class ImageManager
{
public:
    static ImageManager* getImageManager();
    void initImageManager();
    void destroyImageManager();
    QPixmap load(const QString &path);
private:
    static ImageManager* p_singleton;
    QMap<QString, QPixmap> imageHashmap;
    ImageManager() = default;
    ~ImageManager() = default;
};

#endif // IMAGEMANAGER_H
