Action()
{

	web_url("device-desc.xml", 
		"URL=http://192.168.100.38:8008/ssdp/device-desc.xml", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t19.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	lr_think_time(9);

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//05DlobpwrrzZRCgYIARAAGAUSNwF-L9IrWkJbc2fuvjsMBN5TXo1ACVS7vwXs2DXoxlXkqGPkiwnmpmgUmgQf0Hhywc4RRuEFtUs&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/vendor/requirejs/require.js", ENDITEM, 
		"Url=/css/images/favicon.ico", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j82&a=56843997&t=pageview&_s=1&dl=https%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1536x864&vp=1536x722&je=0&_u=IEBAAEAB~&jid=1050170641&gjid=1120876286&cid=1443963958.1590774995&tid=UA-81334227-1&_gid=991534009.1590774995&_r=1&z=617974549", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		LAST);

	web_add_cookie("SID=wwfYkNPmwaF0HjxoGxI9gvFa5YSS3PdtLkZrGjGqxCsN9cOIkTnmJb3GxYU0EvWwSqDfPA.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=wwfYkNPmwaF0HjxoGxI9gvFa5YSS3PdtLkZrGjGqxCsN9cOI90eb3Fgoodb39WYZbhJ30A.; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=AY9wpEL5UWxafWmIM; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AQF2FeuT0r_0-1Q1F; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=-Q2uhRf1rGQkiVE5/AyU2irG3ubboOLzEO; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=2TeNTDO48WQqOvfq/AA4mIf750NtW4XCJr; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-HSID=AY9wpEL5UWxafWmIM; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-SSID=AQF2FeuT0r_0-1Q1F; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-APISID=-Q2uhRf1rGQkiVE5/AyU2irG3ubboOLzEO; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=2TeNTDO48WQqOvfq/AA4mIf750NtW4XCJr; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI6Q7JLyvs-SEyT-hhLzyU_Jb--5RuwsV-CqQC8jxBVx0-IexUj1SHEIhTMdUvl0D7t_d_8GoqgLv7AtIEiUM5GDwzrY64KI1YTV-6C9W7CTRFt-smPv5reHV-4B53-bNSuTcH1Y; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI048B; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=doritos|o.gds.google.com|s.CR|s.youtube:wwfYkK4DTESxiIwbgzpJMRBlz-9A7dErQa4Jz-hfKO2x2FTZHI-1l9Nln_nF2HRStgN9uA.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=doritos|o.gds.google.com|s.CR|s.youtube:wwfYkK4DTESxiIwbgzpJMRBlz-9A7dErQa4Jz-hfKO2x2FTZJTQrc8V9syB7i5AS5hgTpg.; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUnhwd2qn7SZpFHc5_FSMNJBmJ5PjgTRSZ7uQbMXxHEaPLupC61kxZlByRHf; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:XKNK6fileGrZVvhfSCyq5rwp9q4s4kafUPg9Fi3Qrw12g4uwEMUVkDSwBwRy6h2X97f4aik6aS3gh9s0uBMsGmbjLcy84w:EUwFDseGui5GnYDs; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:XKNK6fileGrZVvhfSCyq5rwp9q4s4kafUPg9Fi3Qrw12g4uwEMUVkDSwBwRy6h2X97f4aik6aS3gh9s0uBMsGmbjLcy84w:EUwFDseGui5GnYDs; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2020-05-29-14; DOMAIN=accounts.google.com");

	web_add_cookie("NID=204=rCmFKO0ZZXVaSngwZmdtlqJg1QijUX8xSRBDA8AIqxYMgT1xi6CykkTAtI6BT9WUU6wgF4XrIiqYPVX_Df6i7stlUi-nBXlcw2zKtflXAtk1ZuhS7xUFB7sdPjrTYmgkaOriU7vvJj8Soma2Pi5erwp6V-NVzqYswuNxUG8LvP7EEl8Uv93qqQ60DCO7S4JP9eGbmBXQ55jcfn4aQk67oeQCNcjnJLrgR4RzycSGSfpjrhichMaodjHrp7QjZm_wJjwS; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AJi4QfEhqNuAHCfup4YDR7cmCSYsVc_M3Hc18_aLJ9BijUtTtjSIBIzkoG1IH_VtXpJQeHmQk8KI; DOMAIN=accounts.google.com");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_url("dynamicConfig.json", 
		"URL=https://d27xxe7juh1us6.cloudfront.net/dynamicConfig.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=83", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//05DlobpwrrzZRCgYIARAAGAUSNwF-L9IrWkJbc2fuvjsMBN5TXo1ACVS7vwXs2DXoxlXkqGPkiwnmpmgUmgQf0Hhywc4RRuEFtUs", 
		LAST);

	web_add_cookie("gnar_containerId=nltlafi2iekk4o2; DOMAIN=auth.grammarly.com");

	web_add_cookie("_ga=GA1.2.1498503526.1588637103; DOMAIN=auth.grammarly.com");

	web_add_cookie("ga_clientId=1498503526.1588637103; DOMAIN=auth.grammarly.com");

	web_add_cookie("_gcl_au=1.1.1443442737.1588637103; DOMAIN=auth.grammarly.com");

	web_add_cookie("_fbp=fb.1.1588637103486.1031300251; DOMAIN=auth.grammarly.com");

	web_add_cookie("_hjid=8d8ab2d9-167f-4345-aae2-cd8518fb2edf; DOMAIN=auth.grammarly.com");

	web_add_cookie("tdi=lfcov3893wwuutq9; DOMAIN=auth.grammarly.com");

	web_add_cookie("grauth=AABH04cKRmr8CNQ9Oq_cvF5QKHTIfb8vKBkw15drzc2KnQKSIRhNjS8NfPzGwUywecpP36c2-WmtAhCm; DOMAIN=auth.grammarly.com");

	web_add_cookie("csrf-token=AABH04xhHlkwJp++cdkT9crG/UYUlN9uW7gFAg; DOMAIN=auth.grammarly.com");

	web_add_cookie("experiment_groups=fluid_gdocs_rollout_enabled|gdocs_sidebar_onepercent_enabled|officeaddin_ue_exp3_enabled|extension_new_rich_text_fields_enabled|safari_migration_inline_disabled_enabled|officeaddin_upgrade_state_exp1_enabled1|officeaddin_outcomes_ui_exp5_enabled1|gdocs_for_chrome_enabled|quarantine_messages_enabled|apollo_rollout_gate_enabled_1|autocorrect_new_ui_v3|emogenie_beta_enabled|officeaddin_upgrade_state_exp2_enabled1|denali_link_to_kaza_enabled|gdocs_for_all_safari_enabled|"
		"safari_migration_backup_notif1_enabled|safari_migration_popup_editor_disabled_enabled|officeaddin_proofit_exp3_enabled|shadow_dom_sidebar_onepercent_enabled|gb_in_editor_free_Test1|safari_migration_inline_warning_enabled|send_email_premium_popup_aggressive_enabled|gdocs_for_all_firefox_enabled|gdocs_new_mapping_enabled|officeaddin_perf_exp3_enabled|officeaddin_muted_alerts_exp2_enabled1; DOMAIN=auth.grammarly.com");

	web_add_cookie("0uNo6TlgXn=0uNo6TlgXn; DOMAIN=auth.grammarly.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_header("x-client-type", 
		"extension-chrome");

	web_add_header("x-client-version", 
		"14.959.0");

	web_add_header("x-container-id", 
		"nltlafi2iekk4o2");

	web_add_header("x-csrf-token", 
		"AABH04xhHlkwJp++cdkT9crG/UYUlN9uW7gFAg");

	web_custom_request("oranonymous", 
		"URL=https://auth.grammarly.com/v3/user/oranonymous?app=chromeExt", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("logv2", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.user.fetch.fail\",\"level\":\"WARN\",\"extra\":{\"json\":\"{}\"},\"application\":\"extensionChrome\",\"version\":\"14.959.0\",\"env\":\"prod\"}", 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=../css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CUci0YPRDWUuEgsN541ADhIAGgAiABILDc5BTHoSABoAIgASCw14bxIZEgAaACIAEgsNDxa-KxIAGgAiABoA?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.1443963958.1590774995; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.991534009.1590774995; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/arrow_right.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,llkgjffcdpffmhiakmfcdcblohccpfmo,gcmjkmgdlgnkkcocmoeiminaijmmjnii,aemomkdncapdnfajjbbcbdebjljbpmpj,mimojjlkmoijpicakmndhoigimigcmbb,hfnkpimlhhgieaddgfemjhofmfblmnib,oimompecagnajdejgnnjijobebaeigek,khaoiebndkojlmppeemjhbpbandiljpe,hnimpnehoodheedghdeeijklkeaacbdc,gkmgaooipdjhmangpemjhigmamcehddo,copjbmjbojbakpaedmpkhmiplmmehfck,jflookgnkcckhobaglndicnbbgbonegd,giekcmmlnklenlaomppkphknjmnnpneh,ehgidpndbllacpjalkiimkbadgjfnnmc,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"bklopemakmnopmghhmccadeonafabnal");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-83.0.4103.61");

	lr_think_time(4);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:3500396163&cup2hreq=e53202c8ae70799805e5c77108b15d269c7bca9d019a1cd8ca5b9c78a0447c37", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"OKWM\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1168aef3-3f98-404a-9c3f-f9a6dd572be5}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"OKWM\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{6e8bb347-017a-4c1d-adb4-3c21e25c2350}\",\"rd\":4897},\"updatecheck\":{},\""
		"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"OKWM\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{a0666c38-bdec-4400-b6f2-80da0d4bb3d0}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"OKWM\",\"enabled\""
		":true,\"ping\":{\"ping_freshness\":\"{41db59b7-2a1f-4b65-b184-963f16319760}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"OKWM\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{68b04282-ce81-4415-a9e1-58a4ecbfc9c1}\",\"rd\":4897},"
		"\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"OKWM\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b9be14bccfb042cc7fa41c072529b68ec6780435cf2e1c2d3b70ce263119c7d2\"}]},\"ping\":{\"ping_freshness\":\"{948d8665-c708-49fd-96a2-d7c5dadf80c6}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"5901\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"OKWM\""
		",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{23acc276-5ff0-4660-8c46-526d9b0cd928}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"OKWM\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{97a2dea8-94d9-48a6-a85a-f2c7da055ee2}\",\"rd\":4897},\""
		"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"OKWM\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{a2bffd58-23f7-4c87-a378-b9380351023a}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"OKWM\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a94e96f52af7838519aac1ae4ef68686817be9661165e20964f81c2b5bec7740\"}]},\"ping\":{\"ping_freshness\":\"{22852417-5ad2-4e74-909d-73cfd89e1f27}\",\"rd\":4897},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.236.200\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"OKWM\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{4b4e4e09-a9e7-495a-af25-fa63fb73ac89}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"OKWM\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fbfe4752b3e0c024c86597200792806e61453712eea98e9036d6e1ee12885a68\"}]},\"ping\":{\"ping_freshness\":\""
		"{422cef11-a78c-43b8-8aa1-f12124be0aa8}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"1225\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"OKWM\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{f0ef3b59-eb9c-46f3-a4af-c558813c6d61}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
		"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"OKWM\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{73ed9d44-fdc4-4493-b159-34ea4b12f324}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"OKWM\",\"cohort\":\"1:ut9:\",\"cohorthint\":\""
		"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.59f80dfc20335b1b6c4562bf68e07f7eeb1ac8b6f5d3099beefa6e130a1ab368\"}]},\"ping\":{\"ping_freshness\":\"{0531ce99-67fe-4e4f-a0f2-74e1926388a2}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"2020.5.17.1142\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"OKWM\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{ddfef10c-bb0e-432c-865f-4d01a0246ced}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"3\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":32},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.16299.1686\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\""
		"{c42142e9-f966-469f-b1bb-06728c23d198}\",\"sessionid\":\"{28931f08-ca58-497c-bc4f-2753a1bc0c47}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.61\"}}", 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(18);

	web_custom_request("email", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/support/contact_us/email", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"categoryId\":1,\"email\":\"test1@microfocus.com\",\"productId\":9,\"text\":\"Test\"}", 
		LAST);

	return 0;
}