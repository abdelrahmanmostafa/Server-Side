#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QPushButton>
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkSession>
#include <QSettings>
#include <QMessageBox>
#include <QDesktopWidget>
#include <QSize>
#include <QLabel>
#include <QNetworkConfigurationManager>
namespace Ui {
class server;
}

class server : public QMainWindow
{
    Q_OBJECT

public:
    explicit server(QWidget *parent = 0);
    ~server();
    void moveToCenter();


private:
       Ui::server *ui;
       //QLabel *statusLabel;
       QPushButton *quitButton;
       QTcpServer *tcpServer;
       QStringList fortunes;
       QNetworkSession *networkSession;
       QPushButton *listenButton;

private slots:
    void sessionOpened();
    void sendData();
    void startServer();


};

#endif // SERVER_H
