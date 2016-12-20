package org.hjctp;

import org.hjctp.api.MdApi;
import org.hjctp.spi.MdSpiAdapter;
import org.hjctp.util.WriteUtil;

import java.util.ArrayList;
import java.util.List;

/**
 * Copyright (c) 2012 Conversant Solutions. All rights reserved.
 * <p/>
 * Created on 2016/12/6.
 */
public class TestMain {
    static{
        System.loadLibrary("hjctp");
    }

    public static void main(String[] args) {
        final String sim_test = "tcp://180.168.146.187:10031";
        final String sim_firm = "tcp://180.168.146.187:10011";
        final String kq_firm = "tcp://116.236.239.136:41213";
        final String[] contracts = new String[]{"rb1705", "m1705", "p1705", "TA705", "SR705", "MA705", "FG705", "RM705",
                 "a1705", "jd1705", "y1705", "pp1705"};
        final MdApi mdApi = new MdApi("d:/tmp", true, true);
        MdSpiAdapter mdSpiA = new MdSpiAdapter();
        WriteUtil.startTimer(mdApi);
        WriteUtil.registerMdSpi(mdSpiA);

        mdApi.registerMdSpi(mdSpiA);
        mdApi.registerFront(sim_firm);
        mdApi.registerLoginInfo("", "", "");
        mdApi.registerSubMarketData(contracts, 6);
        mdApi.connect();

//        new Thread(){
//            @Override
//            public void run() {
//                System.out.println("thread start...");
//                try {
//                    Thread.sleep(10000);
//                } catch (InterruptedException e) {
//                    e.printStackTrace();
//                }
//                System.out.println("close.....");
//                mdApi.stop();
//            }
//        }.start();  forward quotation
    }
}
