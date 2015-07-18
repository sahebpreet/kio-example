#include "kioexample.h"

#include <kio/filejob.h>
#include <kio/job.h>
#include <QDebug>

KIOExample::KIOExample()
{
    KIO::FileJob * job = KIO::open( KUrl( "http://saheb/test.pdf" ), QIODevice::ReadOnly );
    connect( job, SIGNAL(result(KJob*)), this, SLOT(slotResult(KJob*)) );
}

void KIOExample::slotResult(KJob* job)
{
    qDebug() << "error " << job->errorString();
}

#include "kioexample.moc"
