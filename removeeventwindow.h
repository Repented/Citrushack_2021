#ifndef REMOVEEVENTWINDOW_H
#define REMOVEEVENTWINDOW_H

#include <QWidget>

namespace Ui {
class removeeventwindow;
}

class removeeventwindow : public QWidget
{
    Q_OBJECT

public:
    explicit removeeventwindow(QWidget *parent = nullptr);
    ~removeeventwindow();

private:
    Ui::removeeventwindow *ui;
};

#endif // REMOVEEVENTWINDOW_H
