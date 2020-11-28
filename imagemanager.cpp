#include "imagemanager.h"

ImageManager* ImageManager::p_singleton = nullptr;
ImageManager* ImageManager::getImageManager()
{
    if(p_singleton == nullptr)
        p_singleton = new ImageManager();
    return p_singleton;
}

void ImageManager::initImageManager()
{
    if(p_singleton == nullptr)
        return;
    if(imageHashmap.empty())
        imageHashmap.clear();
}

void ImageManager::destroyImageManager()
{
    if(p_singleton == nullptr)
        return;
    delete p_singleton;
    p_singleton = nullptr;
}

QPixmap ImageManager::load(const QString &path)
{
    if(imageHashmap.find(path) == imageHashmap.end())
        imageHashmap.insert(path, QPixmap(":/images/" + path));
    return imageHashmap[path];
}

