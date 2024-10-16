/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp com.deepin.logviewer.xml -p DeepinLogviewerInterface
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DEEPINLOGVIEWERINTERFACE_H
#define DEEPINLOGVIEWERINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.logviewer
 */
class DeepinLogviewerInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    {
        return "com.deepin.logviewer";
    }

public:
    DeepinLogviewerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~DeepinLogviewerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int> exitCode()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("exitCode"), argumentList);
    }

    inline QDBusPendingReply<bool> exportLog(const QString &outDir, const QString &in, bool isFile)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(outDir) << QVariant::fromValue(in) << QVariant::fromValue(isFile);
        return asyncCallWithArgumentList(QStringLiteral("exportLog"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getFileInfo(const QString &file, bool unzip)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(file) << QVariant::fromValue(unzip);
        return asyncCallWithArgumentList(QStringLiteral("getFileInfo"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getOtherFileInfo(const QString &file, bool unzip)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(file) << QVariant::fromValue(unzip);
        return asyncCallWithArgumentList(QStringLiteral("getOtherFileInfo"), argumentList);
    }

    inline QDBusPendingReply<> quit()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("quit"), argumentList);
    }

    inline QDBusPendingReply<QString> readLog(const QDBusUnixFileDescriptor &fd)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(fd);
        return asyncCallWithArgumentList(QStringLiteral("readLog"), argumentList);
    }

    inline QDBusPendingReply<QString> readLog(const QString &filePath)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filePath);
        return asyncCallWithArgumentList(QStringLiteral("readLog"), argumentList);
    }

    inline QDBusPendingReply<QStringList> readLogLinesInRange(const QString &filePath, qint64 startLine, qint64 lineCount, bool bReverse)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filePath) << QVariant::fromValue(startLine) << QVariant::fromValue(lineCount) << QVariant::fromValue(bReverse);
        return asyncCallWithArgumentList(QStringLiteral("readLogLinesInRange"), argumentList);
    }

    inline QDBusPendingReply<QString> openLogStream(const QString &filePath)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filePath);
        return asyncCallWithArgumentList(QStringLiteral("openLogStream"), argumentList);
    }

    inline QDBusPendingReply<QString> readLogInStream(const QString &token)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(token);
        return asyncCallWithArgumentList(QStringLiteral("readLogInStream"), argumentList);
    }

    inline QDBusPendingReply<bool> isFileExist(const QString &filePath)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filePath);
        return asyncCallWithArgumentList(QStringLiteral("isFileExist"), argumentList);
    }

    inline QDBusPendingReply<quint64> getFileSize(const QString &filePath)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filePath);
        return asyncCallWithArgumentList(QStringLiteral("getFileSize"), argumentList);
    }

    inline QDBusPendingReply<qint64> getLineCount(const QString &filePath)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filePath);
        return asyncCallWithArgumentList(QStringLiteral("getLineCount"), argumentList);
    }

    inline QDBusPendingReply<QString> executeCmd(const QString &cmd)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(cmd);
        return asyncCallWithArgumentList(QStringLiteral("executeCmd"), argumentList);
    }

    inline QDBusPendingReply<QStringList> whiteListOutPaths()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("whiteListOutPaths"), argumentList);
    }
Q_SIGNALS: // SIGNALS
};

namespace com {
namespace deepin {
typedef ::DeepinLogviewerInterface logviewer;
}
} // namespace com
#endif
