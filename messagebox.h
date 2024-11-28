#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H

#include <QWidget>

namespace Ui {
class MessageBox;
}

class MessageBox : public QWidget
{
    Q_OBJECT

public:
    explicit MessageBox(QWidget *parent = nullptr);
    ~MessageBox();

private:
    Ui::MessageBox *ui;
};

#endif // MESSAGEBOX_H
