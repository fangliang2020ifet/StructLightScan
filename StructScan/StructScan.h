#pragma once

// QT
#include <QtWidgets/QMainWindow>
#include <QSplitter>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMdiArea>
#include <QMessageBox>
#include <QLabel>
#include <QTextEdit>
#include <QStandardItemModel>
#include <QStyleFactory>
#include <QDebug>

#include "ui_StructScan.h"


class CCalibrationWnd;
class CImageWnd;
class CPlotWnd;
class CPointCloudWnd;
class CRoi;


class StructScan : public QMainWindow
{
    Q_OBJECT

public:
    StructScan(QWidget *parent = Q_NULLPTR);
	~StructScan();



private:
    Ui::StructScanClass ui;

	QMdiArea *m_mdiArea = nullptr;
	CPointCloudWnd *m_pcloudwnd = nullptr;
	CImageWnd *m_pimagewnd1 = nullptr;
	CImageWnd *m_pimagewnd2 = nullptr;
	CCalibrationWnd *m_pcalibwnd = nullptr;


	void InitialConnection();
	void CreatePointCloudWnd();
	void CreateCameraDisplayWnd();
	void InitialStatusBar();
	void InitialDockWidget(int width);
	void InitialTree();
	
signals:
	void signalOpenPCL();

private slots:
	void onActionProjectNewClicked();
	void onActionProjectSaveClicked();
	void onActionProjectOpenFileClicked();
	void onActionProjectOpenCalibrationClicked();
	void onActionSetupSystemClicked();
	void onActionSetupCameraClicked();
	void onActionSetupProjectorClicked();
	void onActionStartClicked();
	void onActionStopClicked();
	void onActionPointCloudSelectClicked();
	void onActionPointCloudDeleteClicked();
	void onActionPointCloudFilterClicked();
	void onActionPointCloudGridClicked();
	void onActionViewPlotClicked();
	void onActionView2DClicked();
	void onActionView3DClicked();
	void onActionViewFrontClicked();
	void onActionViewBackClicked();
	void onActionViewLeftClicked();
	void onActionViewRightClicked();
	void onActionViewTopClicked();
	void onActionViewBottomClicked();




};