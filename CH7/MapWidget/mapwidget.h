#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include<QGraphicsView>
#include<QLabel>
#include<QMouseEvent>

class MapWidget : public QGraphicsView
{
    Q_OBJECT
public:
    MapWidget();
    void readMap();
    QPointF mapToMap(QPointF);
public slots:
    void slotZoom(int);
protected:
    void drawBackground(QPainter *painter, const QRectF &rect);
    void mouseMoveEvent(QMouseEvent *event);
private:
    QPixmap map;
    qreal zoom;
    QLabel *viewCoord;
    QLabel *sceneCoord;
    QLabel *mapCoord;
    double x1,y1;
    double x2,y2;
};

#endif // MAPWIDGET_H
