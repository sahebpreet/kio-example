#ifndef KIOEXAMPLE_H
#define KIOEXAMPLE_H

#include <QtGui/QMainWindow>
#include <kurl.h>

class KJob;
namespace KIO {
    class Job;
}

class KIOExample : public QMainWindow
{
    Q_OBJECT

    public:
	KIOExample();

    protected slots:
	void slotResult( KJob * job, qulonglong size );
	void slotHandleData( KIO::Job* job, const QByteArray & data );
};

#endif

