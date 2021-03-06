/* 
 * File:   PSI_GUI_SubWindow.cpp
 * Author: alex
 * 
 * Created on August 27, 2016, 12:47 PM
 */

#include "PSI_GUI_SubWindowTemplate.h"

PSI_GUI_SubWindowTemplate::PSI_GUI_SubWindowTemplate(QWidget* parent) : QWidget(parent) {
}

PSI_GUI_SubWindowTemplate::PSI_GUI_SubWindowTemplate(QWidget* parent, QWidget * main) : QWidget(parent) {
    this->main = main;
}

PSI_GUI_SubWindowTemplate::~PSI_GUI_SubWindowTemplate() {
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_goBack() {
    this->hide();
    main->show();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_connectBackButton() {
    connect(ui.backButton, SIGNAL(clicked(bool)), this, SLOT(PSI_GUI_goBack()));
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_connectStartButton() {
    connect(ui.startButton, SIGNAL(clicked(bool)), this, SLOT(PSI_GUI_go()));
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_connectFileBrowserButtons() {
    connect(ui.browserPathAButton, SIGNAL(clicked(bool)), this,
            SLOT(PSI_GUI_BrowserPathA()));
    connect(ui.browserPathBButton, SIGNAL(clicked(bool)), this,
            SLOT(PSI_GUI_BrowserPathB()));
    connect(ui.browserPathBucketsButton, SIGNAL(clicked(bool)), this,
            SLOT(PSI_GUI_BrowserPathBuckets()));
    connect(ui.browserPathResultButton, SIGNAL(clicked(bool)), this,
            SLOT(PSI_GUI_BrowserPathResultA()));
    connect(ui.browserPathResultButtonB, SIGNAL(clicked(bool)), this,
            SLOT(PSI_GUI_BrowserPathResultB()));
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideSeeds() {
    ui.labelSeed1->hide();
    ui.labelSeed1->setEnabled(false);
    ui.labelSeed2->hide();
    ui.labelSeed2->setEnabled(false);
    ui.labelSeed3->hide();
    ui.labelSeed3->setEnabled(false);
    ui.lineEditHashSeed1->hide();
    ui.lineEditHashSeed1->setEnabled(false);
    ui.lineEditHashSeed2->hide();
    ui.lineEditHashSeed2->setEnabled(false);
    ui.lineEditHashSeed3->hide();
    ui.lineEditHashSeed3->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideResultB() {
    ui.labelPathResultB->hide();
    ui.labelPathResultB->setEnabled(false);
    ui.lineEditPathResultB->hide();
    ui.lineEditPathResultB->setEnabled(false);
    ui.browserPathResultButtonB->hide();
    ui.browserPathResultButtonB->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideResultA() {
    ui.labelPathResult->hide();
    ui.labelPathResult->setEnabled(false);
    ui.lineEditPathResult->hide();
    ui.lineEditPathResult->setEnabled(false);
    ui.browserPathResultButton->hide();
    ui.browserPathResultButton->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideRecursiveDeepnessLimit() {
    ui.labelRecursiveDeepnessLimit->hide();
    ui.labelRecursiveDeepnessLimit->setEnabled(false);
    ui.lineEditRecursiveDeepnessLimit->hide();
    ui.lineEditRecursiveDeepnessLimit->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideHashTableFeatures() {
    ui.labelTableSize->hide();
    ui.labelTableSize->setEnabled(false);
    ui.labelTableSizeMultiplier->hide();
    ui.labelTableSizeMultiplier->setEnabled(false);
    ui.lineEditTableSize->hide();
    ui.lineEditTableSize->setEnabled(false);
    ui.lineEditTableSizeMultiplier->hide();
    ui.lineEditTableSizeMultiplier->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideNetworkFeatures() {
    ui.labelIP->hide();
    ui.labelIP->setEnabled(false);
    ui.labelPort->hide();
    ui.labelPort->setEnabled(false);
    ui.lineEditIP->hide();
    ui.lineEditIP->setEnabled(false);
    ui.lineEditPort->hide();
    ui.lineEditPort->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideWriteBufferSize() {
    ui.labelWriteBufferSize->hide();
    ui.labelWriteBufferSize->setEnabled(false);
    ui.lineEditWriteBufferSize->hide();
    ui.lineEditWriteBufferSize->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideReadBufferSize() {
    ui.labelReadBufferSize->hide();
    ui.labelReadBufferSize->setEnabled(false);
    ui.lineEditReadBufferSize->hide();
    ui.lineEditReadBufferSize->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HidePathB() {
    ui.labelPathB->hide();
    ui.labelPathB->setEnabled(false);
    ui.lineEditPathB->hide();
    ui.lineEditPathB->setEnabled(false);
    ui.browserPathBButton->hide();
    ui.browserPathBButton->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideBucketN() {
    ui.labelNumberOfBuckets->hide();
    ui.labelNumberOfBuckets->setEnabled(false);
    ui.lineEditNumberOfBuckets->hide();
    ui.lineEditNumberOfBuckets->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HidePathBuckets() {
    ui.labelPathBuckets->hide();
    ui.labelPathBuckets->setEnabled(false);
    ui.lineEditPathBuckets->hide();
    ui.lineEditPathBuckets->setEnabled(false);
    ui.browserPathBucketsButton->hide();
    ui.browserPathBucketsButton->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideQueueBufferSize() {
    ui.labelQueueBufferSize->hide();
    ui.labelQueueBufferSize->setEnabled(false);
    ui.lineEditQueueBufferSize->hide();
    ui.lineEditQueueBufferSize->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideElementSize() {
    ui.labelElementSize->hide();
    ui.labelElementSize->setEnabled(false);
    ui.lineEditElementSize->hide();
    ui.lineEditElementSize->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideThreads() {
    ui.labelThreads->hide();
    ui.labelThreads->setEnabled(false);
    ui.lineEditThreads->hide();
    ui.lineEditThreads->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_NH_Hide() {
    PSI_GUI_HideHashTableFeatures();
    PSI_GUI_HideRecursiveDeepnessLimit();
    PSI_GUI_HideSeeds();
    PSI_GUI_HideWriteBufferSize();
    PSI_GUI_HideReductionButton();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideReductionButton() {
    ui.checkBoxReduction->hide();
    ui.checkBoxReduction->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_go() {
    if (PSI_GUI_selfCheck()) {
        PSI_GUI_disableInterface();
        PSI_GUI_start();
        PSI_GUI_enableInterface();
    } else perror("Something is wrong");
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_start() {
    PSI_GUI_Execute(command);
    PSI_GUI_postExecution();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_getPathDirectory(QString * path) {
    *path = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
            "/home", NULL);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_getPathFile(QString * path) {
    *path = QFileDialog::getOpenFileName(this, tr("Open File"),
            "/home", tr("*"));
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HandleFileBrowserButton(QLineEdit * l, bool isFile) {
    QString s;
    if (isFile)
        PSI_GUI_getPathFile(&s);
    else
        PSI_GUI_getPathDirectory(&s);

    if (!s.isNull() && !s.isEmpty())
        l->setText(s);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_connectAllButtons() {
    PSI_GUI_connectBackButton();
    PSI_GUI_connectStartButton();
    PSI_GUI_connectFileBrowserButtons();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_BrowserPathA() {
    PSI_GUI_HandleFileBrowserButton(ui.lineEditPathA, TRUE);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_BrowserPathB() {
    PSI_GUI_HandleFileBrowserButton(ui.lineEditPathB, TRUE);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_BrowserPathBuckets() {
    PSI_GUI_HandleFileBrowserButton(ui.lineEditPathBuckets, FALSE);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_BrowserPathResultA() {
    PSI_GUI_HandleFileBrowserButton(ui.lineEditPathResult, TRUE);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_BrowserPathResultB() {
    PSI_GUI_HandleFileBrowserButton(ui.lineEditPathResultB, TRUE);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_enableInterface() {
    this->setEnabled(true);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_disableInterface() {
    this->setEnabled(false);
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_getCStr(QString qs, char * s) {
    strncpy(s, qs.toStdString().c_str(), qs.size());
    s[qs.size()] = '\0';
}

bool PSI_GUI_SubWindowTemplate::PSI_GUI_checkOnlyDigits() {
    if (PSI_GUI_LineEditOnlyDigits(ui.lineEditThreads) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditElementSize) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditNumberOfBuckets) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditPort) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditQueueBufferSize) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditReadBufferSize) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditRecursiveDeepnessLimit) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditTableSize) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditTableSizeMultiplier) &&
            PSI_GUI_LineEditOnlyDigits(ui.lineEditWriteBufferSize))
        return true;
    return false;
}

bool PSI_GUI_SubWindowTemplate::PSI_GUI_LineEditOnlyDigits(QLineEdit * l) {
    QRegExp re("(\\d*|\\d*.\\d*)");
    if (l->text().isNull() || l->text().isEmpty() || re.exactMatch(l->text()))
        return true;
    ui.textBrowser->append("Use only digits where only digits are expected\n");
    return false;
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_composeSeed(QLineEdit * q, const char * pattern, char * seed_as_parameter) {
    if (q->text().size() == 32) {
        char seed_rough[40];
        PSI_GUI_getCStr(q->text(), seed_rough);
        snprintf(seed_as_parameter, 40, pattern, seed_rough);
        strncat(command, seed_as_parameter, 40);
    }
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_composeIfGreater0(char* arg, const char* pattern) {
    if (strlen(arg) > 0) {
        char tmp[128];
        snprintf(tmp, 128, pattern, arg);
        strncat(command, tmp, 128);
    }
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_Execute(char * command) {
    const char msg[] = "Command to be executed\n";
    ui.textBrowser->append(QString::fromAscii(msg, strlen(msg)));
    ui.textBrowser->append(QString::fromAscii(command, strlen(command)));
    ui.textBrowser->append(QString::fromAscii("\n\n", 2));
    FILE * program = popen(command, "r");
    if (program == NULL) {
        perror("Error starting program");
        exit(EXIT_FAILURE);
    }
    char buffer[2048];
    while (fgets(buffer, sizeof (buffer), program) != NULL) {
        if (ui.checkBoxOutput->checkState() == Qt::Checked)
            ui.textBrowser->append(QString::fromAscii(buffer, strlen(buffer)));
    }
    pclose(program);
}