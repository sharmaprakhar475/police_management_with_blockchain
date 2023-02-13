#ifndef BLOCK_H
#define BLOCK_H
#include <bits/stdc++.h>
#include "global.h"
#include <QVector>

using namespace std;
const int BLOCK_SIZE = 5;

class Block
{
public:
    int index;
    QString timestamp;
    QString data;
    QString hash;
    QString previousHash;

    Block();
    Block(int idx, QString ts, QString d, QString ph);
    QString calculateHash();
    QString generateRandomString(int length);
};
extern QVector<Block> blockchain;
#endif // BLOCK_H

