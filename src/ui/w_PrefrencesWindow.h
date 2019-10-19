#ifndef HVCONF_H
#define HVCONF_H

#include <QDialog>
#include <ui_w_PrefrencesWindow.h>
#include "Qv2rayBase.h"

namespace Ui
{
    class PrefrencesWindow;
}

class PrefrencesWindow : public QDialog
{
        Q_OBJECT

    public:
        explicit PrefrencesWindow(QWidget *parent = nullptr);
        ~PrefrencesWindow();
    signals:
        void s_reload_config(bool need_restart);

    private slots:
        void on_buttonBox_accepted();

        void on_httpCB_stateChanged(int arg1);

        void on_socksCB_stateChanged(int arg1);

        void on_httpAuthCB_stateChanged(int arg1);

        void on_socksAuthCB_stateChanged(int arg1);

        void on_languageComboBox_currentTextChanged(const QString &arg1);

        void on_logLevelComboBox_currentIndexChanged(int index);

        void on_vCoreAssetsPathTxt_textEdited(const QString &arg1);

        void on_listenIPTxt_textEdited(const QString &arg1);

        void on_socksPortLE_valueChanged(int arg1);

        void on_httpPortLE_valueChanged(int arg1);

        void on_httpAuthUsernameTxt_textEdited(const QString &arg1);

        void on_httpAuthPasswordTxt_textEdited(const QString &arg1);

        void on_socksAuthUsernameTxt_textEdited(const QString &arg1);

        void on_socksAuthPasswordTxt_textEdited(const QString &arg1);

        void on_proxyDefaultCb_stateChanged(int arg1);

        void on_localDNSCb_stateChanged(int arg1);

        void on_selectVAssetBtn_clicked();

        void on_DNSListTxt_textChanged();

        void on_autoStartCombo_currentTextChanged(const QString &arg1);

        void on_aboutQt_clicked();

        void on_cancelIgnoreVersionBtn_clicked();

        void on_tProxyCheckBox_stateChanged(int arg1);

        void on_bypassCNCb_stateChanged(int arg1);

        void on_statsCheckbox_stateChanged(int arg1);

        void on_statsPortBox_valueChanged(int arg1);

        void on_socksUDPCB_stateChanged(int arg1);

        void on_socksUDPIP_textEdited(const QString &arg1);

        void on_nsBarPageAddBTN_clicked();

        void on_nsBarPageDelBTN_clicked();

        void on_nsBarPageYOffset_valueChanged(int arg1);

        void on_nsBarLineAddBTN_clicked();

        void on_nsBarLineDelBTN_clicked();

        void on_nsBarPagesList_currentRowChanged(int currentRow);

        void on_nsBarLinesList_currentRowChanged(int currentRow);

        void on_fontComboBox_currentFontChanged(const QFont &f);

        void on_nsBarContentCombo_currentIndexChanged(int index);

        void on_nsBatFontBoldCB_stateChanged(int arg1);

        void on_nsBatFontItalicCB_stateChanged(int arg1);

        void on_nsBarFontASB_valueChanged(int arg1);

        void on_nsBarFontRSB_valueChanged(int arg1);

        void on_nsBarFontGSB_valueChanged(int arg1);

        void on_nsBarFontBSB_valueChanged(int arg1);

        void on_nsBarFontSizeSB_valueChanged(double arg1);

    private:
        // Set ui parameters for a line;
        void ShowLineParameters(QvBarLine &line);
        //
        QvBarLine *CurrentBarLine;
        QvBarPage *CurrentBarPage;
        //
        bool IsConnectionPropertyChanged = false;
        bool finishedLoading = false;
        Qv2ray::QvConfigModels::Qv2rayConfig CurrentConfig;
        Ui::PrefrencesWindow *ui;
};
#endif // HVCONF_H
