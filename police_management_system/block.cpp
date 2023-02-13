#include "block.h"
#include <bits/stdc++.h>
#include <QChar>
#include "QRandomGenerator"

using namespace std;

Block::Block()
{

}

Block::Block(int idx, QString ts, QString d, QString ph)
    : index(idx), timestamp(ts), data(d), previousHash(ph)
{
    // Calculate hash
    hash = calculateHash();
}

QString Block::generateRandomString(int length)
{
    QString result;
    result.reserve(length);
    const QString alphanumeric = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for (int i = 0; i < length; ++i) {
        result.append(alphanumeric.at(QRandomGenerator::global()->bounded(alphanumeric.length())));
    }
    return result;
}

QString Block::calculateHash()
{
    QString ss;
    ss = QString::number(index) + timestamp + data + previousHash;
    //    QString str = ss;
    //    QByteArray ba = str.toUtf8();
    //    char* c = ba.data();
    //    sha256 *sha;
    QString randomString = generateRandomString(10);
    return randomString;
}
QVector<Block> blockchain;
