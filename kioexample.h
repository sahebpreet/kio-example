#ifndef KIOEXAMPLE_H
#define KIOEXAMPLE_H

#include <QtGui/QMainWindow>
#include <kurl.h>

class KJob;

class KIOExample : public QMainWindow
{
    Q_OBJECT

    public:
	KIOExample();

    protected slots:
	void slotResult( KJob * job );
};

#endif
