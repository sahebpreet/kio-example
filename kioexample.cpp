#include "kioexample.h"

#include <kio/filejob.h>
#include <kio/job.h>
#include <QDebug>

KIOExample::KIOExample()
{
    KIO::TransferJob * job = KIO::get( KUrl( "http://humanstxt.org/humans.txt" ));
    connect( job, SIGNAL(totalSize(KJob*, qulonglong)), this, SLOT(slotResult(KJob*, qulonglong)) );
    job->addMetaData( QString( "range-start" ), QString::number( 12 ) );
    job->addMetaData( QString( "range-end" ), QString::number( 25 ) );
    connect( job, SIGNAL(data(KIO::Job*, const QByteArray&)), this, SLOT(slotHandleData(KIO::Job*, const QByteArray&)) );
}

void KIOExample::slotResult(KJob* job, qulonglong size)
{
    if( job->error() )
	qDebug() << job->errorString();
    else
	qDebug() << "size of the file " << size;
    qDebug() << "total amount" << size;
}

void KIOExample::slotHandleData( KIO::Job* job, const QByteArray & data )
{
    qDebug()<< data;
    qDebug() <<data.size();
}

#include "kioexample.moc"