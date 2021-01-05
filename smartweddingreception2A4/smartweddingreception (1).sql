--------------------------------------------------------
--  Fichier cr�� - mardi-janvier-05-2021   
--------------------------------------------------------
DROP TABLE "MERYEM"."SALLE";
DROP TABLE "MERYEM"."GATEAU";
DROP TABLE "MERYEM"."MUSIQUE";
DROP TABLE "MERYEM"."FLEURISTE";
DROP TABLE "MERYEM"."LOGIN";
DROP TABLE "MERYEM"."BAGUE";
DROP TABLE "MERYEM"."BUFFET";
DROP TABLE "MERYEM"."CLIENT";
DROP TABLE "MERYEM"."DECORATION";
DROP TABLE "MERYEM"."PROMOTION";
DROP TABLE "MERYEM"."OFFRE";
DROP TABLE "MERYEM"."ROBE";
DROP TABLE "MERYEM"."RECLAMATION";
--------------------------------------------------------
--  DDL for Table SALLE
--------------------------------------------------------

  CREATE TABLE "MERYEM"."SALLE" 
   (	"IDS" NUMBER, 
	"EMPLACEMENT" VARCHAR2(20 BYTE), 
	"NOM" VARCHAR2(20 BYTE), 
	"DISPO" NUMBER, 
	"PRIX" NUMBER, 
	"CAPACITE" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table GATEAU
--------------------------------------------------------

  CREATE TABLE "MERYEM"."GATEAU" 
   (	"IDG" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRIX" NUMBER, 
	"INGREDIANTS" VARCHAR2(990 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table MUSIQUE
--------------------------------------------------------

  CREATE TABLE "MERYEM"."MUSIQUE" 
   (	"IDM" NUMBER, 
	"TYPE" VARCHAR2(20 BYTE), 
	"EMAIL" VARCHAR2(50 BYTE), 
	"PRIX" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table FLEURISTE
--------------------------------------------------------

  CREATE TABLE "MERYEM"."FLEURISTE" 
   (	"IDF" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"NUM" NUMBER, 
	"PRIX" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table LOGIN
--------------------------------------------------------

  CREATE TABLE "MERYEM"."LOGIN" 
   (	"ID" VARCHAR2(20 BYTE), 
	"MDP" VARCHAR2(20 BYTE), 
	"TYPE" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table BAGUE
--------------------------------------------------------

  CREATE TABLE "MERYEM"."BAGUE" 
   (	"IDB" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRIX" NUMBER, 
	"COMMENTAIRE" VARCHAR2(500 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table BUFFET
--------------------------------------------------------

  CREATE TABLE "MERYEM"."BUFFET" 
   (	"IDBF" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRIX" NUMBER, 
	"TYPE_NOURITURE" VARCHAR2(990 BYTE), 
	"TYPE_BOISSON" VARCHAR2(990 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table CLIENT
--------------------------------------------------------

  CREATE TABLE "MERYEM"."CLIENT" 
   (	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"AGE" NUMBER, 
	"CIN" NUMBER, 
	"REGION" VARCHAR2(20 BYTE), 
	"NUMERO" NUMBER, 
	"MAIL" VARCHAR2(50 BYTE), 
	"DAT" DATE
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table DECORATION
--------------------------------------------------------

  CREATE TABLE "MERYEM"."DECORATION" 
   (	"IDD" NUMBER, 
	"NOMDECORATEUR" VARCHAR2(100 BYTE), 
	"STYLE" VARCHAR2(100 BYTE), 
	"NUM" NUMBER, 
	"PRIX" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table PROMOTION
--------------------------------------------------------

  CREATE TABLE "MERYEM"."PROMOTION" 
   (	"IDP" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"TAUX" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table OFFRE
--------------------------------------------------------

  CREATE TABLE "MERYEM"."OFFRE" 
   (	"MAQUILLEUSE" NUMBER, 
	"PRIXROB" NUMBER, 
	"VOITURE" NUMBER, 
	"PRIXTOTALE" NUMBER, 
	"PRIXBAGUE" NUMBER, 
	"PRIXMAQ" NUMBER, 
	"PRIXVOI" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table ROBE
--------------------------------------------------------

  CREATE TABLE "MERYEM"."ROBE" 
   (	"IDR" NUMBER, 
	"NOMROBE" VARCHAR2(20 BYTE), 
	"PRIX" NUMBER, 
	"COMMENTAIRE" VARCHAR2(990 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table RECLAMATION
--------------------------------------------------------

  CREATE TABLE "MERYEM"."RECLAMATION" 
   (	"DAT" DATE, 
	"RATE" NUMBER, 
	"COMMENTAIRE" VARCHAR2(990 BYTE), 
	"CIN" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into MERYEM.SALLE
SET DEFINE OFF;
REM INSERTING into MERYEM.GATEAU
SET DEFINE OFF;
REM INSERTING into MERYEM.MUSIQUE
SET DEFINE OFF;
Insert into MERYEM.MUSIQUE (IDM,TYPE,EMAIL,PRIX) values ('123','celine','hhh@','1258');
REM INSERTING into MERYEM.FLEURISTE
SET DEFINE OFF;
REM INSERTING into MERYEM.LOGIN
SET DEFINE OFF;
REM INSERTING into MERYEM.BAGUE
SET DEFINE OFF;
Insert into MERYEM.BAGUE (IDB,NOM,PRIX,COMMENTAIRE) values ('102','le saphir','11000','Il evoque la fidelite et voire meme la richesse.');
Insert into MERYEM.BAGUE (IDB,NOM,PRIX,COMMENTAIRE) values ('101','le diamant','10000','Il evoque la purete.');
Insert into MERYEM.BAGUE (IDB,NOM,PRIX,COMMENTAIRE) values ('103','l emeraude','12000','Synonyme de bonheur et de passion.');
Insert into MERYEM.BAGUE (IDB,NOM,PRIX,COMMENTAIRE) values ('104','le rubis','15000','Symbole de la fertilite et de l esperance.');
Insert into MERYEM.BAGUE (IDB,NOM,PRIX,COMMENTAIRE) values ('7','hh','8','hh');
REM INSERTING into MERYEM.BUFFET
SET DEFINE OFF;
REM INSERTING into MERYEM.CLIENT
SET DEFINE OFF;
REM INSERTING into MERYEM.DECORATION
SET DEFINE OFF;
REM INSERTING into MERYEM.PROMOTION
SET DEFINE OFF;
Insert into MERYEM.PROMOTION (IDP,NOM,TAUX) values ('203','chila bila','15');
Insert into MERYEM.PROMOTION (IDP,NOM,TAUX) values ('214','hlou','5');
Insert into MERYEM.PROMOTION (IDP,NOM,TAUX) values ('207','hbel','10');
Insert into MERYEM.PROMOTION (IDP,NOM,TAUX) values ('220','kwala ','3');
Insert into MERYEM.PROMOTION (IDP,NOM,TAUX) values ('20','meryem','10');
REM INSERTING into MERYEM.OFFRE
SET DEFINE OFF;
Insert into MERYEM.OFFRE (MAQUILLEUSE,PRIXROB,VOITURE,PRIXTOTALE,PRIXBAGUE,PRIXMAQ,PRIXVOI) values ('0','0','0','0','0','900','800');
Insert into MERYEM.OFFRE (MAQUILLEUSE,PRIXROB,VOITURE,PRIXTOTALE,PRIXBAGUE,PRIXMAQ,PRIXVOI) values ('0','0','0','0','0','87','89');
REM INSERTING into MERYEM.ROBE
SET DEFINE OFF;
Insert into MERYEM.ROBE (IDR,NOMROBE,PRIX,COMMENTAIRE) values ('1','Boheme','1500','Une robe toute en legerete avec un dos decollete magnifique.');
Insert into MERYEM.ROBE (IDR,NOMROBE,PRIX,COMMENTAIRE) values ('3','Sirene','1800','Belle robe sirene en dentelle.');
Insert into MERYEM.ROBE (IDR,NOMROBE,PRIX,COMMENTAIRE) values ('2','Empire','1700','Une robe empire tres volupteuse.');
Insert into MERYEM.ROBE (IDR,NOMROBE,PRIX,COMMENTAIRE) values ('4','Sirene plus ','2000','Belle sirene avec une traine.');
REM INSERTING into MERYEM.RECLAMATION
SET DEFINE OFF;
Insert into MERYEM.RECLAMATION (DAT,RATE,COMMENTAIRE,CIN) values (to_date('01/01/00','DD/MM/RR'),'0',null,'0');
Insert into MERYEM.RECLAMATION (DAT,RATE,COMMENTAIRE,CIN) values (to_date('01/01/00','DD/MM/RR'),'0',null,'0');
--------------------------------------------------------
--  Constraints for Table SALLE
--------------------------------------------------------

  ALTER TABLE "MERYEM"."SALLE" MODIFY ("CAPACITE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."SALLE" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."SALLE" MODIFY ("DISPO" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."SALLE" MODIFY ("NOM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."SALLE" MODIFY ("EMPLACEMENT" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."SALLE" MODIFY ("IDS" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table GATEAU
--------------------------------------------------------

  ALTER TABLE "MERYEM"."GATEAU" MODIFY ("INGREDIANTS" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."GATEAU" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."GATEAU" MODIFY ("NOM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."GATEAU" MODIFY ("IDG" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table MUSIQUE
--------------------------------------------------------

  ALTER TABLE "MERYEM"."MUSIQUE" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."MUSIQUE" MODIFY ("EMAIL" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."MUSIQUE" MODIFY ("TYPE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."MUSIQUE" MODIFY ("IDM" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table FLEURISTE
--------------------------------------------------------

  ALTER TABLE "MERYEM"."FLEURISTE" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."FLEURISTE" MODIFY ("NUM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."FLEURISTE" MODIFY ("NOM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."FLEURISTE" MODIFY ("IDF" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table LOGIN
--------------------------------------------------------

  ALTER TABLE "MERYEM"."LOGIN" MODIFY ("TYPE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."LOGIN" MODIFY ("MDP" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."LOGIN" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table BAGUE
--------------------------------------------------------

  ALTER TABLE "MERYEM"."BAGUE" MODIFY ("COMMENTAIRE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."BAGUE" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."BAGUE" MODIFY ("NOM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."BAGUE" MODIFY ("IDB" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table BUFFET
--------------------------------------------------------

  ALTER TABLE "MERYEM"."BUFFET" MODIFY ("TYPE_BOISSON" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."BUFFET" MODIFY ("TYPE_NOURITURE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."BUFFET" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."BUFFET" MODIFY ("NOM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."BUFFET" MODIFY ("IDBF" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table CLIENT
--------------------------------------------------------

  ALTER TABLE "MERYEM"."CLIENT" MODIFY ("DAT" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."CLIENT" MODIFY ("MAIL" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."CLIENT" MODIFY ("NUMERO" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."CLIENT" MODIFY ("REGION" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."CLIENT" MODIFY ("CIN" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."CLIENT" MODIFY ("AGE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."CLIENT" MODIFY ("PRENOM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."CLIENT" MODIFY ("NOM" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table DECORATION
--------------------------------------------------------

  ALTER TABLE "MERYEM"."DECORATION" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."DECORATION" MODIFY ("NUM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."DECORATION" MODIFY ("STYLE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."DECORATION" MODIFY ("NOMDECORATEUR" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."DECORATION" MODIFY ("IDD" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table PROMOTION
--------------------------------------------------------

  ALTER TABLE "MERYEM"."PROMOTION" MODIFY ("TAUX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."PROMOTION" MODIFY ("NOM" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."PROMOTION" MODIFY ("IDP" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table ROBE
--------------------------------------------------------

  ALTER TABLE "MERYEM"."ROBE" MODIFY ("COMMENTAIRE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."ROBE" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."ROBE" MODIFY ("NOMROBE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."ROBE" MODIFY ("IDR" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table RECLAMATION
--------------------------------------------------------

  ALTER TABLE "MERYEM"."RECLAMATION" MODIFY ("CIN" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."RECLAMATION" MODIFY ("RATE" NOT NULL ENABLE);
  ALTER TABLE "MERYEM"."RECLAMATION" MODIFY ("DAT" NOT NULL ENABLE);
