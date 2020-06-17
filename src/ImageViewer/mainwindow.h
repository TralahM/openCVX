#ifndef __MAINW
#define __MAINW

#include <QMainWindow>

class MainWindow : public QMainWindow{
    Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent=nullptr);
        ~MainWindow();
    private:
        void initUI();
    private:
        QMenu *fileMenu;
        QMenu *viewMenu;

        QToolBar *fileToolBar;
        QToolBar *viewToolBar;

        QGraphicsScene *imageScene;
        QGraphicsView *imageView;

        QStatusBar *mainStatusBar;
        QLabel *mainStatusLabel;
};

#endif
