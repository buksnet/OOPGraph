#ifndef GRAPH_H
#define GRAPH_H

#include <QQueue>
#include <QVector>
#include <QDebug>

class Graph
{
private:
    QVector<int> vertexList;

    QVector<QVector<int>> adjMatrix;

    int maxSize;

    QQueue<int> VertsQueue;

    QVector<int> labelList;

public:

    Graph(const int& size);

    Graph();

    void showAdj();

    QVector<QVector<int>> getAdj();

    bool isEmpty();

    bool isFull();

    int GetVertPos(const int&);

    int GetAmountVerts();

    bool insertVertex(int&);

    int GetAmountEdges();

    int GetWeight(const int&, const int&);

    int getWeightInd(const int&, const int&);

    void eraseVertex(const int& vert);

    void eraseEdge(const int& vert,const int& vert2);

    void InsertEdge(const int& vertex1, const int& vertex2, const int& weight = 1);

    QVector<int> GetNbrs(const int&);

    QVector<int> getVertexList();

    bool AllVisited(QVector<bool> &visitedVerts);

    void FillLabels(int &startVertex);

    void ShortestWay(int &startVertex, QString &res);
};

#endif // GRAPH_H
