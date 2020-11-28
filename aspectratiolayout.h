#ifndef ASPECTRATIOLAYOUT_H
#define ASPECTRATIOLAYOUT_H

#include <QLayout>

class AspectRatioLayout : public QLayout
{
    Q_OBJECT
public:
    explicit AspectRatioLayout(QWidget *parent = nullptr);
    virtual ~AspectRatioLayout() override;


    virtual void addItem(QLayoutItem *item) override;
    virtual QLayoutItem* itemAt(int index) const override;
    virtual QLayoutItem* takeAt(int index) override;
    virtual int count() const override;

    virtual QSize minimumSize() const override;
    virtual QSize sizeHint() const override;
    virtual void setGeometry(const QRect &rect) override;
    virtual Qt::Orientations expandingDirections() const override;
private:
    QLayoutItem *item;
};

#endif // ASPECTRATIOLAYOUT_H
