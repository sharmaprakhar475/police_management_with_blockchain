#ifndef VIEW_COMPLAINTS_H
#define VIEW_COMPLAINTS_H

#include <QDialog>

namespace Ui {
class View_complaints;
}

class View_complaints : public QDialog
{
    Q_OBJECT

public:
    explicit View_complaints(QWidget *parent = nullptr);
    ~View_complaints();

private:
    Ui::View_complaints *ui;
};

#endif // VIEW_COMPLAINTS_H
