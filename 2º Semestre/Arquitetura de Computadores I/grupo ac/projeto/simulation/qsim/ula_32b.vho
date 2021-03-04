-- Copyright (C) 2020  Intel Corporation. All rights reserved.
-- Your use of Intel Corporation's design tools, logic functions 
-- and other software and tools, and any partner logic 
-- functions, and any output files from any of the foregoing 
-- (including device programming or simulation files), and any 
-- associated documentation or information are expressly subject 
-- to the terms and conditions of the Intel Program License 
-- Subscription Agreement, the Intel Quartus Prime License Agreement,
-- the Intel FPGA IP License Agreement, or other applicable license
-- agreement, including, without limitation, that your use is for
-- the sole purpose of programming logic devices manufactured by
-- Intel and sold by Intel or its authorized distributors.  Please
-- refer to the applicable agreement for further details, at
-- https://fpgasoftware.intel.com/eula.

-- VENDOR "Altera"
-- PROGRAM "Quartus Prime"
-- VERSION "Version 20.1.0 Build 711 06/05/2020 SJ Lite Edition"

-- DATE "11/09/2020 18:39:09"

-- 
-- Device: Altera 10M08DAF484C8G Package FBGA484
-- 

-- 
-- This VHDL file should be used for ModelSim-Altera (VHDL) only
-- 

LIBRARY FIFTYFIVENM;
LIBRARY IEEE;
USE FIFTYFIVENM.FIFTYFIVENM_COMPONENTS.ALL;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY 	hard_block IS
    PORT (
	devoe : IN std_logic;
	devclrn : IN std_logic;
	devpor : IN std_logic
	);
END hard_block;

-- Design Ports Information
-- ~ALTERA_TMS~	=>  Location: PIN_H2,	 I/O Standard: 2.5 V Schmitt Trigger,	 Current Strength: Default
-- ~ALTERA_TCK~	=>  Location: PIN_G2,	 I/O Standard: 2.5 V Schmitt Trigger,	 Current Strength: Default
-- ~ALTERA_TDI~	=>  Location: PIN_L4,	 I/O Standard: 2.5 V Schmitt Trigger,	 Current Strength: Default
-- ~ALTERA_TDO~	=>  Location: PIN_M5,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- ~ALTERA_CONFIG_SEL~	=>  Location: PIN_H10,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- ~ALTERA_nCONFIG~	=>  Location: PIN_H9,	 I/O Standard: 2.5 V Schmitt Trigger,	 Current Strength: Default
-- ~ALTERA_nSTATUS~	=>  Location: PIN_G9,	 I/O Standard: 2.5 V Schmitt Trigger,	 Current Strength: Default
-- ~ALTERA_CONF_DONE~	=>  Location: PIN_F8,	 I/O Standard: 2.5 V Schmitt Trigger,	 Current Strength: Default


ARCHITECTURE structure OF hard_block IS
SIGNAL gnd : std_logic := '0';
SIGNAL vcc : std_logic := '1';
SIGNAL unknown : std_logic := 'X';
SIGNAL ww_devoe : std_logic;
SIGNAL ww_devclrn : std_logic;
SIGNAL ww_devpor : std_logic;
SIGNAL \~ALTERA_TMS~~padout\ : std_logic;
SIGNAL \~ALTERA_TCK~~padout\ : std_logic;
SIGNAL \~ALTERA_TDI~~padout\ : std_logic;
SIGNAL \~ALTERA_CONFIG_SEL~~padout\ : std_logic;
SIGNAL \~ALTERA_nCONFIG~~padout\ : std_logic;
SIGNAL \~ALTERA_nSTATUS~~padout\ : std_logic;
SIGNAL \~ALTERA_CONF_DONE~~padout\ : std_logic;
SIGNAL \~ALTERA_TMS~~ibuf_o\ : std_logic;
SIGNAL \~ALTERA_TCK~~ibuf_o\ : std_logic;
SIGNAL \~ALTERA_TDI~~ibuf_o\ : std_logic;
SIGNAL \~ALTERA_CONFIG_SEL~~ibuf_o\ : std_logic;
SIGNAL \~ALTERA_nCONFIG~~ibuf_o\ : std_logic;
SIGNAL \~ALTERA_nSTATUS~~ibuf_o\ : std_logic;
SIGNAL \~ALTERA_CONF_DONE~~ibuf_o\ : std_logic;

BEGIN

ww_devoe <= devoe;
ww_devclrn <= devclrn;
ww_devpor <= devpor;
END structure;


LIBRARY FIFTYFIVENM;
LIBRARY IEEE;
USE FIFTYFIVENM.FIFTYFIVENM_COMPONENTS.ALL;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY 	ula_32b IS
    PORT (
	a : IN std_logic_vector(31 DOWNTO 0);
	b : IN std_logic_vector(31 DOWNTO 0);
	binvert : IN std_logic;
	operation : IN std_logic_vector(2 DOWNTO 0);
	resultado : OUT std_logic_vector(31 DOWNTO 0);
	zero : OUT std_logic;
	overflow : OUT std_logic
	);
END ula_32b;

-- Design Ports Information
-- resultado[0]	=>  Location: PIN_AB15,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[1]	=>  Location: PIN_P15,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[2]	=>  Location: PIN_C7,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[3]	=>  Location: PIN_J9,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[4]	=>  Location: PIN_M21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[5]	=>  Location: PIN_U22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[6]	=>  Location: PIN_K22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[7]	=>  Location: PIN_E9,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[8]	=>  Location: PIN_F18,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[9]	=>  Location: PIN_L18,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[10]	=>  Location: PIN_K6,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[11]	=>  Location: PIN_K15,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[12]	=>  Location: PIN_M18,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[13]	=>  Location: PIN_W15,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[14]	=>  Location: PIN_F2,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[15]	=>  Location: PIN_R22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[16]	=>  Location: PIN_L14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[17]	=>  Location: PIN_F20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[18]	=>  Location: PIN_G19,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[19]	=>  Location: PIN_H4,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[20]	=>  Location: PIN_L19,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[21]	=>  Location: PIN_M15,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[22]	=>  Location: PIN_M20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[23]	=>  Location: PIN_D21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[24]	=>  Location: PIN_B10,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[25]	=>  Location: PIN_T18,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[26]	=>  Location: PIN_P20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[27]	=>  Location: PIN_D8,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[28]	=>  Location: PIN_F7,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[29]	=>  Location: PIN_P14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[30]	=>  Location: PIN_P13,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- resultado[31]	=>  Location: PIN_N15,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- zero	=>  Location: PIN_B4,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- overflow	=>  Location: PIN_E21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[0]	=>  Location: PIN_Y13,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- binvert	=>  Location: PIN_T19,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[0]	=>  Location: PIN_AA16,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- operation[1]	=>  Location: PIN_Y14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- operation[2]	=>  Location: PIN_P22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- operation[0]	=>  Location: PIN_T20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[1]	=>  Location: PIN_N22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[1]	=>  Location: PIN_R15,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[2]	=>  Location: PIN_E10,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[2]	=>  Location: PIN_H11,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[3]	=>  Location: PIN_G4,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[3]	=>  Location: PIN_F3,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[4]	=>  Location: PIN_L22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[4]	=>  Location: PIN_N21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[5]	=>  Location: PIN_R18,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[5]	=>  Location: PIN_V14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[6]	=>  Location: PIN_J22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[6]	=>  Location: PIN_J21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[7]	=>  Location: PIN_A4,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[7]	=>  Location: PIN_B7,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[8]	=>  Location: PIN_E19,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[8]	=>  Location: PIN_H14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[9]	=>  Location: PIN_L20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[9]	=>  Location: PIN_C20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[10]	=>  Location: PIN_J3,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[10]	=>  Location: PIN_K4,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[11]	=>  Location: PIN_K14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[11]	=>  Location: PIN_D17,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[12]	=>  Location: PIN_N20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[12]	=>  Location: PIN_F21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[13]	=>  Location: PIN_N14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[13]	=>  Location: PIN_M22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[14]	=>  Location: PIN_K2,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[14]	=>  Location: PIN_E1,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[15]	=>  Location: PIN_AB18,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[15]	=>  Location: PIN_U21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[16]	=>  Location: PIN_L15,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[16]	=>  Location: PIN_N18,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[17]	=>  Location: PIN_D22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[17]	=>  Location: PIN_C22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[18]	=>  Location: PIN_G22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[18]	=>  Location: PIN_G20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[19]	=>  Location: PIN_G3,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[19]	=>  Location: PIN_J4,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[20]	=>  Location: PIN_H17,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[20]	=>  Location: PIN_D19,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[21]	=>  Location: PIN_M14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[21]	=>  Location: PIN_E22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[22]	=>  Location: PIN_F22,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[22]	=>  Location: PIN_K21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[23]	=>  Location: PIN_C21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[23]	=>  Location: PIN_G17,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[24]	=>  Location: PIN_A7,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[24]	=>  Location: PIN_J11,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[25]	=>  Location: PIN_R20,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[25]	=>  Location: PIN_AA21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[26]	=>  Location: PIN_P19,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[26]	=>  Location: PIN_P18,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[27]	=>  Location: PIN_C8,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[27]	=>  Location: PIN_A6,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[28]	=>  Location: PIN_L9,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[28]	=>  Location: PIN_L8,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[29]	=>  Location: PIN_P21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[29]	=>  Location: PIN_R14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[30]	=>  Location: PIN_Y16,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[30]	=>  Location: PIN_AB14,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- a[31]	=>  Location: PIN_H21,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- b[31]	=>  Location: PIN_H22,	 I/O Standard: 2.5 V,	 Current Strength: Default


ARCHITECTURE structure OF ula_32b IS
SIGNAL gnd : std_logic := '0';
SIGNAL vcc : std_logic := '1';
SIGNAL unknown : std_logic := 'X';
SIGNAL devoe : std_logic := '1';
SIGNAL devclrn : std_logic := '1';
SIGNAL devpor : std_logic := '1';
SIGNAL ww_devoe : std_logic;
SIGNAL ww_devclrn : std_logic;
SIGNAL ww_devpor : std_logic;
SIGNAL ww_a : std_logic_vector(31 DOWNTO 0);
SIGNAL ww_b : std_logic_vector(31 DOWNTO 0);
SIGNAL ww_binvert : std_logic;
SIGNAL ww_operation : std_logic_vector(2 DOWNTO 0);
SIGNAL ww_resultado : std_logic_vector(31 DOWNTO 0);
SIGNAL ww_zero : std_logic;
SIGNAL ww_overflow : std_logic;
SIGNAL \~QUARTUS_CREATED_ADC1~_CHSEL_bus\ : std_logic_vector(4 DOWNTO 0);
SIGNAL \~QUARTUS_CREATED_GND~I_combout\ : std_logic;
SIGNAL \~QUARTUS_CREATED_UNVM~~busy\ : std_logic;
SIGNAL \~QUARTUS_CREATED_ADC1~~eoc\ : std_logic;
SIGNAL \resultado[0]~output_o\ : std_logic;
SIGNAL \resultado[1]~output_o\ : std_logic;
SIGNAL \resultado[2]~output_o\ : std_logic;
SIGNAL \resultado[3]~output_o\ : std_logic;
SIGNAL \resultado[4]~output_o\ : std_logic;
SIGNAL \resultado[5]~output_o\ : std_logic;
SIGNAL \resultado[6]~output_o\ : std_logic;
SIGNAL \resultado[7]~output_o\ : std_logic;
SIGNAL \resultado[8]~output_o\ : std_logic;
SIGNAL \resultado[9]~output_o\ : std_logic;
SIGNAL \resultado[10]~output_o\ : std_logic;
SIGNAL \resultado[11]~output_o\ : std_logic;
SIGNAL \resultado[12]~output_o\ : std_logic;
SIGNAL \resultado[13]~output_o\ : std_logic;
SIGNAL \resultado[14]~output_o\ : std_logic;
SIGNAL \resultado[15]~output_o\ : std_logic;
SIGNAL \resultado[16]~output_o\ : std_logic;
SIGNAL \resultado[17]~output_o\ : std_logic;
SIGNAL \resultado[18]~output_o\ : std_logic;
SIGNAL \resultado[19]~output_o\ : std_logic;
SIGNAL \resultado[20]~output_o\ : std_logic;
SIGNAL \resultado[21]~output_o\ : std_logic;
SIGNAL \resultado[22]~output_o\ : std_logic;
SIGNAL \resultado[23]~output_o\ : std_logic;
SIGNAL \resultado[24]~output_o\ : std_logic;
SIGNAL \resultado[25]~output_o\ : std_logic;
SIGNAL \resultado[26]~output_o\ : std_logic;
SIGNAL \resultado[27]~output_o\ : std_logic;
SIGNAL \resultado[28]~output_o\ : std_logic;
SIGNAL \resultado[29]~output_o\ : std_logic;
SIGNAL \resultado[30]~output_o\ : std_logic;
SIGNAL \resultado[31]~output_o\ : std_logic;
SIGNAL \zero~output_o\ : std_logic;
SIGNAL \overflow~output_o\ : std_logic;
SIGNAL \a[0]~input_o\ : std_logic;
SIGNAL \b[0]~input_o\ : std_logic;
SIGNAL \operation[0]~input_o\ : std_logic;
SIGNAL \ula0|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \binvert~input_o\ : std_logic;
SIGNAL \ula0|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \operation[1]~input_o\ : std_logic;
SIGNAL \operation[2]~input_o\ : std_logic;
SIGNAL \ula0|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ula0|mux4|Mux0~2_combout\ : std_logic;
SIGNAL \b[1]~input_o\ : std_logic;
SIGNAL \a[1]~input_o\ : std_logic;
SIGNAL \ulas_30:1:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:1:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:1:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[2]~input_o\ : std_logic;
SIGNAL \a[2]~input_o\ : std_logic;
SIGNAL \ulas_30:2:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:2:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:2:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[3]~input_o\ : std_logic;
SIGNAL \a[3]~input_o\ : std_logic;
SIGNAL \ulas_30:3:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:3:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:3:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[4]~input_o\ : std_logic;
SIGNAL \a[4]~input_o\ : std_logic;
SIGNAL \ulas_30:4:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:4:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:4:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[5]~input_o\ : std_logic;
SIGNAL \b[5]~input_o\ : std_logic;
SIGNAL \ulas_30:5:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:5:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:5:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[6]~input_o\ : std_logic;
SIGNAL \b[6]~input_o\ : std_logic;
SIGNAL \ulas_30:6:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:6:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:6:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[7]~input_o\ : std_logic;
SIGNAL \b[7]~input_o\ : std_logic;
SIGNAL \ulas_30:7:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:7:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:7:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[8]~input_o\ : std_logic;
SIGNAL \a[8]~input_o\ : std_logic;
SIGNAL \ulas_30:8:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:8:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:8:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[9]~input_o\ : std_logic;
SIGNAL \a[9]~input_o\ : std_logic;
SIGNAL \ulas_30:9:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:9:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:9:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[10]~input_o\ : std_logic;
SIGNAL \b[10]~input_o\ : std_logic;
SIGNAL \ulas_30:10:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:10:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:10:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[11]~input_o\ : std_logic;
SIGNAL \a[11]~input_o\ : std_logic;
SIGNAL \ulas_30:11:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:11:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:11:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[12]~input_o\ : std_logic;
SIGNAL \a[12]~input_o\ : std_logic;
SIGNAL \ulas_30:12:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:12:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:12:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[13]~input_o\ : std_logic;
SIGNAL \b[13]~input_o\ : std_logic;
SIGNAL \ulas_30:13:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:13:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:13:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[14]~input_o\ : std_logic;
SIGNAL \b[14]~input_o\ : std_logic;
SIGNAL \ulas_30:14:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:14:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:14:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[15]~input_o\ : std_logic;
SIGNAL \b[15]~input_o\ : std_logic;
SIGNAL \ulas_30:15:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:15:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:15:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[16]~input_o\ : std_logic;
SIGNAL \a[16]~input_o\ : std_logic;
SIGNAL \ulas_30:16:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:16:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:16:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[17]~input_o\ : std_logic;
SIGNAL \a[17]~input_o\ : std_logic;
SIGNAL \ulas_30:17:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:17:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:17:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[18]~input_o\ : std_logic;
SIGNAL \b[18]~input_o\ : std_logic;
SIGNAL \ulas_30:18:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:18:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:18:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[19]~input_o\ : std_logic;
SIGNAL \b[19]~input_o\ : std_logic;
SIGNAL \ulas_30:19:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:19:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:19:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[20]~input_o\ : std_logic;
SIGNAL \a[20]~input_o\ : std_logic;
SIGNAL \ulas_30:20:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:20:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:20:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[21]~input_o\ : std_logic;
SIGNAL \a[21]~input_o\ : std_logic;
SIGNAL \ulas_30:21:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:21:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:21:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[22]~input_o\ : std_logic;
SIGNAL \b[22]~input_o\ : std_logic;
SIGNAL \ulas_30:22:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:22:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:22:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[23]~input_o\ : std_logic;
SIGNAL \b[23]~input_o\ : std_logic;
SIGNAL \ulas_30:23:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:23:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:23:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[24]~input_o\ : std_logic;
SIGNAL \b[24]~input_o\ : std_logic;
SIGNAL \ulas_30:24:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:24:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:24:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[25]~input_o\ : std_logic;
SIGNAL \a[25]~input_o\ : std_logic;
SIGNAL \ulas_30:25:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:25:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:25:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[26]~input_o\ : std_logic;
SIGNAL \b[26]~input_o\ : std_logic;
SIGNAL \ulas_30:26:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:26:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:26:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[27]~input_o\ : std_logic;
SIGNAL \b[27]~input_o\ : std_logic;
SIGNAL \ulas_30:27:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:27:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:27:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[28]~input_o\ : std_logic;
SIGNAL \b[28]~input_o\ : std_logic;
SIGNAL \ulas_30:28:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:28:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:28:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \b[29]~input_o\ : std_logic;
SIGNAL \a[29]~input_o\ : std_logic;
SIGNAL \ulas_30:29:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:29:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:29:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[30]~input_o\ : std_logic;
SIGNAL \b[30]~input_o\ : std_logic;
SIGNAL \ulas_30:30:ula30|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ulas_30:30:ula30|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ulas_30:30:ula30|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \a[31]~input_o\ : std_logic;
SIGNAL \b[31]~input_o\ : std_logic;
SIGNAL \ula31|mux4|Mux0~0_combout\ : std_logic;
SIGNAL \ula31|somador1b|somador2|soma~0_combout\ : std_logic;
SIGNAL \ula31|mux4|Mux0~1_combout\ : std_logic;
SIGNAL \ula31|somador1b|carry~0_combout\ : std_logic;

COMPONENT hard_block
    PORT (
	devoe : IN std_logic;
	devclrn : IN std_logic;
	devpor : IN std_logic);
END COMPONENT;

BEGIN

ww_a <= a;
ww_b <= b;
ww_binvert <= binvert;
ww_operation <= operation;
resultado <= ww_resultado;
zero <= ww_zero;
overflow <= ww_overflow;
ww_devoe <= devoe;
ww_devclrn <= devclrn;
ww_devpor <= devpor;

\~QUARTUS_CREATED_ADC1~_CHSEL_bus\ <= (\~QUARTUS_CREATED_GND~I_combout\ & \~QUARTUS_CREATED_GND~I_combout\ & \~QUARTUS_CREATED_GND~I_combout\ & \~QUARTUS_CREATED_GND~I_combout\ & \~QUARTUS_CREATED_GND~I_combout\);
auto_generated_inst : hard_block
PORT MAP (
	devoe => ww_devoe,
	devclrn => ww_devclrn,
	devpor => ww_devpor);

-- Location: LCCOMB_X11_Y13_N16
\~QUARTUS_CREATED_GND~I\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \~QUARTUS_CREATED_GND~I_combout\ = GND

-- pragma translate_off
GENERIC MAP (
	lut_mask => "0000000000000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	combout => \~QUARTUS_CREATED_GND~I_combout\);

-- Location: IOOBUF_X24_Y0_N30
\resultado[0]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ula0|mux4|Mux0~2_combout\,
	devoe => ww_devoe,
	o => \resultado[0]~output_o\);

-- Location: IOOBUF_X31_Y5_N23
\resultado[1]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:1:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[1]~output_o\);

-- Location: IOOBUF_X17_Y25_N16
\resultado[2]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:2:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[2]~output_o\);

-- Location: IOOBUF_X10_Y21_N23
\resultado[3]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:3:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[3]~output_o\);

-- Location: IOOBUF_X31_Y7_N23
\resultado[4]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:4:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[4]~output_o\);

-- Location: IOOBUF_X31_Y4_N16
\resultado[5]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:5:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[5]~output_o\);

-- Location: IOOBUF_X31_Y11_N23
\resultado[6]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:6:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[6]~output_o\);

-- Location: IOOBUF_X13_Y25_N16
\resultado[7]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:7:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[7]~output_o\);

-- Location: IOOBUF_X31_Y20_N16
\resultado[8]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:8:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[8]~output_o\);

-- Location: IOOBUF_X31_Y19_N16
\resultado[9]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:9:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[9]~output_o\);

-- Location: IOOBUF_X10_Y19_N23
\resultado[10]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:10:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[10]~output_o\);

-- Location: IOOBUF_X31_Y21_N16
\resultado[11]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:11:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[11]~output_o\);

-- Location: IOOBUF_X31_Y19_N23
\resultado[12]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:12:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[12]~output_o\);

-- Location: IOOBUF_X27_Y0_N23
\resultado[13]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:13:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[13]~output_o\);

-- Location: IOOBUF_X10_Y15_N9
\resultado[14]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:14:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[14]~output_o\);

-- Location: IOOBUF_X31_Y4_N9
\resultado[15]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:15:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[15]~output_o\);

-- Location: IOOBUF_X31_Y17_N23
\resultado[16]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:16:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[16]~output_o\);

-- Location: IOOBUF_X31_Y15_N16
\resultado[17]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:17:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[17]~output_o\);

-- Location: IOOBUF_X31_Y12_N16
\resultado[18]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:18:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[18]~output_o\);

-- Location: IOOBUF_X10_Y20_N2
\resultado[19]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:19:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[19]~output_o\);

-- Location: IOOBUF_X31_Y19_N9
\resultado[20]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:20:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[20]~output_o\);

-- Location: IOOBUF_X31_Y13_N23
\resultado[21]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:21:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[21]~output_o\);

-- Location: IOOBUF_X31_Y14_N9
\resultado[22]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:22:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[22]~output_o\);

-- Location: IOOBUF_X31_Y17_N9
\resultado[23]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:23:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[23]~output_o\);

-- Location: IOOBUF_X19_Y25_N2
\resultado[24]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:24:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[24]~output_o\);

-- Location: IOOBUF_X31_Y3_N16
\resultado[25]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:25:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[25]~output_o\);

-- Location: IOOBUF_X31_Y6_N2
\resultado[26]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:26:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[26]~output_o\);

-- Location: IOOBUF_X15_Y25_N16
\resultado[27]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:27:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[27]~output_o\);

-- Location: IOOBUF_X6_Y10_N30
\resultado[28]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:28:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[28]~output_o\);

-- Location: IOOBUF_X31_Y5_N16
\resultado[29]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:29:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[29]~output_o\);

-- Location: IOOBUF_X22_Y0_N9
\resultado[30]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ulas_30:30:ula30|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[30]~output_o\);

-- Location: IOOBUF_X31_Y9_N16
\resultado[31]~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ula31|mux4|Mux0~1_combout\,
	devoe => ww_devoe,
	o => \resultado[31]~output_o\);

-- Location: IOOBUF_X6_Y10_N2
\zero~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => GND,
	devoe => ww_devoe,
	o => \zero~output_o\);

-- Location: IOOBUF_X31_Y13_N2
\overflow~output\ : fiftyfivenm_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \ula31|somador1b|carry~0_combout\,
	devoe => ww_devoe,
	o => \overflow~output_o\);

-- Location: IOIBUF_X24_Y0_N22
\a[0]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(0),
	o => \a[0]~input_o\);

-- Location: IOIBUF_X27_Y0_N8
\b[0]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(0),
	o => \b[0]~input_o\);

-- Location: IOIBUF_X31_Y3_N8
\operation[0]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_operation(0),
	o => \operation[0]~input_o\);

-- Location: LCCOMB_X24_Y3_N12
\ula0|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ula0|mux4|Mux0~1_combout\ = (\a[0]~input_o\ & ((\b[0]~input_o\) # (\operation[0]~input_o\))) # (!\a[0]~input_o\ & (\b[0]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[0]~input_o\,
	datac => \b[0]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ula0|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y3_N22
\binvert~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_binvert,
	o => \binvert~input_o\);

-- Location: LCCOMB_X24_Y3_N24
\ula0|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ula0|somador1b|somador2|soma~0_combout\ = \a[0]~input_o\ $ (((\b[0]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000111100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[0]~input_o\,
	datac => \b[0]~input_o\,
	datad => \binvert~input_o\,
	combout => \ula0|somador1b|somador2|soma~0_combout\);

-- Location: IOIBUF_X24_Y0_N15
\operation[1]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_operation(1),
	o => \operation[1]~input_o\);

-- Location: IOIBUF_X31_Y4_N1
\operation[2]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_operation(2),
	o => \operation[2]~input_o\);

-- Location: LCCOMB_X24_Y3_N10
\ula0|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ula0|mux4|Mux0~0_combout\ = (\operation[1]~input_o\ & ((!\operation[0]~input_o\) # (!\operation[2]~input_o\))) # (!\operation[1]~input_o\ & (\operation[2]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "0110011011101110",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[1]~input_o\,
	datab => \operation[2]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ula0|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X24_Y3_N22
\ula0|mux4|Mux0~2\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ula0|mux4|Mux0~2_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ula0|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ula0|mux4|Mux0~1_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ula0|mux4|Mux0~1_combout\,
	datab => \ula0|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ula0|mux4|Mux0~2_combout\);

-- Location: IOIBUF_X31_Y2_N22
\b[1]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(1),
	o => \b[1]~input_o\);

-- Location: IOIBUF_X31_Y5_N1
\a[1]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(1),
	o => \a[1]~input_o\);

-- Location: LCCOMB_X30_Y5_N10
\ulas_30:1:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:1:ula30|mux4|Mux0~0_combout\ = (\b[1]~input_o\ & ((\operation[0]~input_o\) # (\a[1]~input_o\))) # (!\b[1]~input_o\ & (\operation[0]~input_o\ & \a[1]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[1]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \a[1]~input_o\,
	combout => \ulas_30:1:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y5_N24
\ulas_30:1:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:1:ula30|somador1b|somador2|soma~0_combout\ = \a[1]~input_o\ $ (((\b[1]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111010100001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[1]~input_o\,
	datac => \binvert~input_o\,
	datad => \a[1]~input_o\,
	combout => \ulas_30:1:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y5_N4
\ulas_30:1:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:1:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:1:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:1:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:1:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:1:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:1:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X17_Y25_N29
\b[2]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(2),
	o => \b[2]~input_o\);

-- Location: IOIBUF_X17_Y25_N1
\a[2]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(2),
	o => \a[2]~input_o\);

-- Location: LCCOMB_X18_Y21_N10
\ulas_30:2:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:2:ula30|mux4|Mux0~0_combout\ = (\b[2]~input_o\ & ((\a[2]~input_o\) # (\operation[0]~input_o\))) # (!\b[2]~input_o\ & (\a[2]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1110100011101000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[2]~input_o\,
	datab => \a[2]~input_o\,
	datac => \operation[0]~input_o\,
	combout => \ulas_30:2:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X18_Y21_N24
\ulas_30:2:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:2:ula30|somador1b|somador2|soma~0_combout\ = \a[2]~input_o\ $ (((\b[2]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100011011000110",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[2]~input_o\,
	datab => \a[2]~input_o\,
	datac => \binvert~input_o\,
	combout => \ulas_30:2:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X18_Y21_N12
\ulas_30:2:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:2:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:2:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:2:ula30|mux4|Mux0~0_combout\ & (!\operation[2]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100111000000010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:2:ula30|mux4|Mux0~0_combout\,
	datab => \ula0|mux4|Mux0~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:2:ula30|somador1b|somador2|soma~0_combout\,
	combout => \ulas_30:2:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X10_Y21_N8
\b[3]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(3),
	o => \b[3]~input_o\);

-- Location: IOIBUF_X10_Y21_N1
\a[3]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(3),
	o => \a[3]~input_o\);

-- Location: LCCOMB_X13_Y21_N10
\ulas_30:3:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:3:ula30|mux4|Mux0~0_combout\ = (\b[3]~input_o\ & ((\a[3]~input_o\) # (\operation[0]~input_o\))) # (!\b[3]~input_o\ & (\a[3]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \b[3]~input_o\,
	datac => \a[3]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ulas_30:3:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X13_Y21_N24
\ulas_30:3:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:3:ula30|somador1b|somador2|soma~0_combout\ = \a[3]~input_o\ $ (((\b[3]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111000000111100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \b[3]~input_o\,
	datac => \a[3]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:3:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X13_Y21_N4
\ulas_30:3:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:3:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:3:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:3:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:3:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:3:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:3:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y7_N8
\b[4]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(4),
	o => \b[4]~input_o\);

-- Location: IOIBUF_X31_Y7_N15
\a[4]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(4),
	o => \a[4]~input_o\);

-- Location: LCCOMB_X30_Y7_N10
\ulas_30:4:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:4:ula30|mux4|Mux0~0_combout\ = (\b[4]~input_o\ & ((\operation[0]~input_o\) # (\a[4]~input_o\))) # (!\b[4]~input_o\ & (\operation[0]~input_o\ & \a[4]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[4]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \a[4]~input_o\,
	combout => \ulas_30:4:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y7_N24
\ulas_30:4:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:4:ula30|somador1b|somador2|soma~0_combout\ = \a[4]~input_o\ $ (((\b[4]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1101110100100010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[4]~input_o\,
	datab => \binvert~input_o\,
	datad => \a[4]~input_o\,
	combout => \ulas_30:4:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y7_N4
\ulas_30:4:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:4:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:4:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:4:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:4:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:4:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:4:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y6_N22
\a[5]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(5),
	o => \a[5]~input_o\);

-- Location: IOIBUF_X27_Y0_N29
\b[5]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(5),
	o => \b[5]~input_o\);

-- Location: LCCOMB_X27_Y5_N24
\ulas_30:5:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:5:ula30|somador1b|somador2|soma~0_combout\ = \a[5]~input_o\ $ (((!\binvert~input_o\ & \b[5]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1001110010011100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \binvert~input_o\,
	datab => \a[5]~input_o\,
	datac => \b[5]~input_o\,
	combout => \ulas_30:5:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X27_Y5_N10
\ulas_30:5:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:5:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\a[5]~input_o\) # (\b[5]~input_o\))) # (!\operation[0]~input_o\ & (\a[5]~input_o\ & \b[5]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1110100011101000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datab => \a[5]~input_o\,
	datac => \b[5]~input_o\,
	combout => \ulas_30:5:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X27_Y5_N20
\ulas_30:5:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:5:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (\ulas_30:5:ula30|somador1b|somador2|soma~0_combout\)) # (!\ula0|mux4|Mux0~0_combout\ & (((!\operation[2]~input_o\ & \ulas_30:5:ula30|mux4|Mux0~0_combout\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1000110110001000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ula0|mux4|Mux0~0_combout\,
	datab => \ulas_30:5:ula30|somador1b|somador2|soma~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:5:ula30|mux4|Mux0~0_combout\,
	combout => \ulas_30:5:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y11_N8
\a[6]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(6),
	o => \a[6]~input_o\);

-- Location: IOIBUF_X31_Y11_N1
\b[6]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(6),
	o => \b[6]~input_o\);

-- Location: LCCOMB_X30_Y11_N10
\ulas_30:6:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:6:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\a[6]~input_o\) # (\b[6]~input_o\))) # (!\operation[0]~input_o\ & (\a[6]~input_o\ & \b[6]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datac => \a[6]~input_o\,
	datad => \b[6]~input_o\,
	combout => \ulas_30:6:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y11_N24
\ulas_30:6:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:6:ula30|somador1b|somador2|soma~0_combout\ = \a[6]~input_o\ $ (((\b[6]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1101001011010010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[6]~input_o\,
	datab => \binvert~input_o\,
	datac => \a[6]~input_o\,
	combout => \ulas_30:6:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y11_N4
\ulas_30:6:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:6:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:6:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:6:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:6:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:6:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:6:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X13_Y25_N1
\a[7]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(7),
	o => \a[7]~input_o\);

-- Location: IOIBUF_X15_Y25_N1
\b[7]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(7),
	o => \b[7]~input_o\);

-- Location: LCCOMB_X15_Y21_N10
\ulas_30:7:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:7:ula30|mux4|Mux0~0_combout\ = (\a[7]~input_o\ & ((\b[7]~input_o\) # (\operation[0]~input_o\))) # (!\a[7]~input_o\ & (\b[7]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[7]~input_o\,
	datac => \b[7]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ulas_30:7:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X15_Y21_N24
\ulas_30:7:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:7:ula30|somador1b|somador2|soma~0_combout\ = \a[7]~input_o\ $ (((\b[7]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010101001011010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[7]~input_o\,
	datac => \b[7]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:7:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X15_Y21_N12
\ulas_30:7:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:7:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:7:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:7:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:7:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:7:ula30|somador1b|somador2|soma~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ula0|mux4|Mux0~0_combout\,
	combout => \ulas_30:7:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X29_Y25_N29
\b[8]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(8),
	o => \b[8]~input_o\);

-- Location: IOIBUF_X31_Y20_N22
\a[8]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(8),
	o => \a[8]~input_o\);

-- Location: LCCOMB_X30_Y20_N10
\ulas_30:8:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:8:ula30|mux4|Mux0~0_combout\ = (\b[8]~input_o\ & ((\operation[0]~input_o\) # (\a[8]~input_o\))) # (!\b[8]~input_o\ & (\operation[0]~input_o\ & \a[8]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[8]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \a[8]~input_o\,
	combout => \ulas_30:8:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y20_N24
\ulas_30:8:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:8:ula30|somador1b|somador2|soma~0_combout\ = \a[8]~input_o\ $ (((\b[8]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1101110100100010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[8]~input_o\,
	datab => \binvert~input_o\,
	datad => \a[8]~input_o\,
	combout => \ulas_30:8:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y20_N4
\ulas_30:8:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:8:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:8:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:8:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:8:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:8:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:8:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y21_N8
\b[9]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(9),
	o => \b[9]~input_o\);

-- Location: IOIBUF_X31_Y19_N1
\a[9]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(9),
	o => \a[9]~input_o\);

-- Location: LCCOMB_X30_Y19_N10
\ulas_30:9:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:9:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\b[9]~input_o\) # (\a[9]~input_o\))) # (!\operation[0]~input_o\ & (\b[9]~input_o\ & \a[9]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datac => \b[9]~input_o\,
	datad => \a[9]~input_o\,
	combout => \ulas_30:9:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y19_N24
\ulas_30:9:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:9:ula30|somador1b|somador2|soma~0_combout\ = \a[9]~input_o\ $ (((!\binvert~input_o\ & \b[9]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1001101010011010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[9]~input_o\,
	datab => \binvert~input_o\,
	datac => \b[9]~input_o\,
	combout => \ulas_30:9:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y19_N4
\ulas_30:9:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:9:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:9:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:9:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:9:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:9:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:9:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X10_Y19_N8
\a[10]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(10),
	o => \a[10]~input_o\);

-- Location: IOIBUF_X10_Y19_N1
\b[10]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(10),
	o => \b[10]~input_o\);

-- Location: LCCOMB_X13_Y19_N10
\ulas_30:10:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:10:ula30|mux4|Mux0~0_combout\ = (\a[10]~input_o\ & ((\b[10]~input_o\) # (\operation[0]~input_o\))) # (!\a[10]~input_o\ & (\b[10]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[10]~input_o\,
	datac => \b[10]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ulas_30:10:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X13_Y19_N24
\ulas_30:10:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:10:ula30|somador1b|somador2|soma~0_combout\ = \a[10]~input_o\ $ (((\b[10]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010101001011010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[10]~input_o\,
	datac => \b[10]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:10:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X13_Y19_N4
\ulas_30:10:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:10:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:10:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:10:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:10:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:10:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:10:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X29_Y25_N15
\b[11]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(11),
	o => \b[11]~input_o\);

-- Location: IOIBUF_X31_Y21_N22
\a[11]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(11),
	o => \a[11]~input_o\);

-- Location: LCCOMB_X30_Y21_N10
\ulas_30:11:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:11:ula30|mux4|Mux0~0_combout\ = (\b[11]~input_o\ & ((\operation[0]~input_o\) # (\a[11]~input_o\))) # (!\b[11]~input_o\ & (\operation[0]~input_o\ & \a[11]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \b[11]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \a[11]~input_o\,
	combout => \ulas_30:11:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y21_N24
\ulas_30:11:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:11:ula30|somador1b|somador2|soma~0_combout\ = \a[11]~input_o\ $ (((!\binvert~input_o\ & \b[11]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1011101101000100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \binvert~input_o\,
	datab => \b[11]~input_o\,
	datad => \a[11]~input_o\,
	combout => \ulas_30:11:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y21_N4
\ulas_30:11:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:11:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:11:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:11:ula30|mux4|Mux0~0_combout\ & (!\operation[2]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100111000000010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:11:ula30|mux4|Mux0~0_combout\,
	datab => \ula0|mux4|Mux0~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:11:ula30|somador1b|somador2|soma~0_combout\,
	combout => \ulas_30:11:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y15_N22
\b[12]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(12),
	o => \b[12]~input_o\);

-- Location: IOIBUF_X31_Y14_N1
\a[12]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(12),
	o => \a[12]~input_o\);

-- Location: LCCOMB_X28_Y15_N10
\ulas_30:12:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:12:ula30|mux4|Mux0~0_combout\ = (\b[12]~input_o\ & ((\a[12]~input_o\) # (\operation[0]~input_o\))) # (!\b[12]~input_o\ & (\a[12]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1110100011101000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[12]~input_o\,
	datab => \a[12]~input_o\,
	datac => \operation[0]~input_o\,
	combout => \ulas_30:12:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X28_Y15_N24
\ulas_30:12:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:12:ula30|somador1b|somador2|soma~0_combout\ = \a[12]~input_o\ $ (((\b[12]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100011011000110",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[12]~input_o\,
	datab => \a[12]~input_o\,
	datac => \binvert~input_o\,
	combout => \ulas_30:12:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X28_Y15_N4
\ulas_30:12:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:12:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:12:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:12:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:12:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:12:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:12:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y9_N22
\a[13]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(13),
	o => \a[13]~input_o\);

-- Location: IOIBUF_X31_Y7_N1
\b[13]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(13),
	o => \b[13]~input_o\);

-- Location: LCCOMB_X27_Y7_N10
\ulas_30:13:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:13:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\a[13]~input_o\) # (\b[13]~input_o\))) # (!\operation[0]~input_o\ & (\a[13]~input_o\ & \b[13]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datac => \a[13]~input_o\,
	datad => \b[13]~input_o\,
	combout => \ulas_30:13:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X27_Y7_N24
\ulas_30:13:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:13:ula30|somador1b|somador2|soma~0_combout\ = \a[13]~input_o\ $ (((\b[13]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1101001011010010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[13]~input_o\,
	datab => \binvert~input_o\,
	datac => \a[13]~input_o\,
	combout => \ulas_30:13:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X27_Y7_N20
\ulas_30:13:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:13:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:13:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:13:ula30|mux4|Mux0~0_combout\ & (!\operation[2]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100111000000010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:13:ula30|mux4|Mux0~0_combout\,
	datab => \ula0|mux4|Mux0~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:13:ula30|somador1b|somador2|soma~0_combout\,
	combout => \ulas_30:13:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X10_Y16_N1
\a[14]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(14),
	o => \a[14]~input_o\);

-- Location: IOIBUF_X10_Y15_N1
\b[14]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(14),
	o => \b[14]~input_o\);

-- Location: LCCOMB_X13_Y15_N10
\ulas_30:14:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:14:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\a[14]~input_o\) # (\b[14]~input_o\))) # (!\operation[0]~input_o\ & (\a[14]~input_o\ & \b[14]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1110100011101000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datab => \a[14]~input_o\,
	datac => \b[14]~input_o\,
	combout => \ulas_30:14:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X13_Y15_N24
\ulas_30:14:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:14:ula30|somador1b|somador2|soma~0_combout\ = \a[14]~input_o\ $ (((\b[14]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000111100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[14]~input_o\,
	datac => \b[14]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:14:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X13_Y15_N4
\ulas_30:14:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:14:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:14:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:14:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:14:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:14:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:14:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X29_Y0_N15
\a[15]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(15),
	o => \a[15]~input_o\);

-- Location: IOIBUF_X31_Y4_N22
\b[15]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(15),
	o => \b[15]~input_o\);

-- Location: LCCOMB_X30_Y4_N10
\ulas_30:15:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:15:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\a[15]~input_o\) # (\b[15]~input_o\))) # (!\operation[0]~input_o\ & (\a[15]~input_o\ & \b[15]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \operation[0]~input_o\,
	datac => \a[15]~input_o\,
	datad => \b[15]~input_o\,
	combout => \ulas_30:15:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y4_N24
\ulas_30:15:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:15:ula30|somador1b|somador2|soma~0_combout\ = \a[15]~input_o\ $ (((!\binvert~input_o\ & \b[15]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010010111110000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \binvert~input_o\,
	datac => \a[15]~input_o\,
	datad => \b[15]~input_o\,
	combout => \ulas_30:15:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y4_N4
\ulas_30:15:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:15:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:15:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:15:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:15:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:15:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:15:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y14_N22
\b[16]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(16),
	o => \b[16]~input_o\);

-- Location: IOIBUF_X31_Y17_N15
\a[16]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(16),
	o => \a[16]~input_o\);

-- Location: LCCOMB_X30_Y16_N10
\ulas_30:16:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:16:ula30|mux4|Mux0~0_combout\ = (\b[16]~input_o\ & ((\operation[0]~input_o\) # (\a[16]~input_o\))) # (!\b[16]~input_o\ & (\operation[0]~input_o\ & \a[16]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \b[16]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \a[16]~input_o\,
	combout => \ulas_30:16:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y16_N24
\ulas_30:16:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:16:ula30|somador1b|somador2|soma~0_combout\ = \a[16]~input_o\ $ (((!\binvert~input_o\ & \b[16]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100111100110000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \binvert~input_o\,
	datac => \b[16]~input_o\,
	datad => \a[16]~input_o\,
	combout => \ulas_30:16:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y16_N4
\ulas_30:16:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:16:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:16:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:16:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:16:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:16:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:16:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y15_N1
\b[17]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(17),
	o => \b[17]~input_o\);

-- Location: IOIBUF_X31_Y15_N8
\a[17]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(17),
	o => \a[17]~input_o\);

-- Location: LCCOMB_X30_Y15_N10
\ulas_30:17:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:17:ula30|mux4|Mux0~0_combout\ = (\b[17]~input_o\ & ((\operation[0]~input_o\) # (\a[17]~input_o\))) # (!\b[17]~input_o\ & (\operation[0]~input_o\ & \a[17]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[17]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \a[17]~input_o\,
	combout => \ulas_30:17:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y15_N24
\ulas_30:17:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:17:ula30|somador1b|somador2|soma~0_combout\ = \a[17]~input_o\ $ (((\b[17]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1101110100100010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[17]~input_o\,
	datab => \binvert~input_o\,
	datad => \a[17]~input_o\,
	combout => \ulas_30:17:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y15_N4
\ulas_30:17:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:17:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:17:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:17:ula30|mux4|Mux0~0_combout\ & (!\operation[2]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100111000000010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:17:ula30|mux4|Mux0~0_combout\,
	datab => \ula0|mux4|Mux0~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:17:ula30|somador1b|somador2|soma~0_combout\,
	combout => \ulas_30:17:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y12_N8
\a[18]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(18),
	o => \a[18]~input_o\);

-- Location: IOIBUF_X31_Y12_N22
\b[18]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(18),
	o => \b[18]~input_o\);

-- Location: LCCOMB_X30_Y12_N10
\ulas_30:18:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:18:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\a[18]~input_o\) # (\b[18]~input_o\))) # (!\operation[0]~input_o\ & (\a[18]~input_o\ & \b[18]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datac => \a[18]~input_o\,
	datad => \b[18]~input_o\,
	combout => \ulas_30:18:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y12_N24
\ulas_30:18:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:18:ula30|somador1b|somador2|soma~0_combout\ = \a[18]~input_o\ $ (((!\binvert~input_o\ & \b[18]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100001111001100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[18]~input_o\,
	datac => \binvert~input_o\,
	datad => \b[18]~input_o\,
	combout => \ulas_30:18:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y12_N4
\ulas_30:18:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:18:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:18:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:18:ula30|mux4|Mux0~0_combout\ & (!\operation[2]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100111000000010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:18:ula30|mux4|Mux0~0_combout\,
	datab => \ula0|mux4|Mux0~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:18:ula30|somador1b|somador2|soma~0_combout\,
	combout => \ulas_30:18:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X10_Y20_N8
\a[19]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(19),
	o => \a[19]~input_o\);

-- Location: IOIBUF_X10_Y20_N15
\b[19]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(19),
	o => \b[19]~input_o\);

-- Location: LCCOMB_X13_Y20_N24
\ulas_30:19:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:19:ula30|somador1b|somador2|soma~0_combout\ = \a[19]~input_o\ $ (((\b[19]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010101001011010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[19]~input_o\,
	datac => \b[19]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:19:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X13_Y20_N10
\ulas_30:19:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:19:ula30|mux4|Mux0~0_combout\ = (\a[19]~input_o\ & ((\b[19]~input_o\) # (\operation[0]~input_o\))) # (!\a[19]~input_o\ & (\b[19]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[19]~input_o\,
	datac => \b[19]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ulas_30:19:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X13_Y20_N28
\ulas_30:19:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:19:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (\ulas_30:19:ula30|somador1b|somador2|soma~0_combout\)) # (!\ula0|mux4|Mux0~0_combout\ & (((!\operation[2]~input_o\ & \ulas_30:19:ula30|mux4|Mux0~0_combout\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1000110110001000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ula0|mux4|Mux0~0_combout\,
	datab => \ulas_30:19:ula30|somador1b|somador2|soma~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:19:ula30|mux4|Mux0~0_combout\,
	combout => \ulas_30:19:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y21_N1
\b[20]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(20),
	o => \b[20]~input_o\);

-- Location: IOIBUF_X31_Y22_N22
\a[20]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(20),
	o => \a[20]~input_o\);

-- Location: LCCOMB_X30_Y18_N10
\ulas_30:20:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:20:ula30|mux4|Mux0~0_combout\ = (\b[20]~input_o\ & ((\operation[0]~input_o\) # (\a[20]~input_o\))) # (!\b[20]~input_o\ & (\operation[0]~input_o\ & \a[20]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \b[20]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \a[20]~input_o\,
	combout => \ulas_30:20:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y18_N24
\ulas_30:20:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:20:ula30|somador1b|somador2|soma~0_combout\ = \a[20]~input_o\ $ (((!\binvert~input_o\ & \b[20]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1011101101000100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \binvert~input_o\,
	datab => \b[20]~input_o\,
	datad => \a[20]~input_o\,
	combout => \ulas_30:20:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y18_N4
\ulas_30:20:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:20:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:20:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:20:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:20:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:20:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:20:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y13_N8
\b[21]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(21),
	o => \b[21]~input_o\);

-- Location: IOIBUF_X31_Y13_N15
\a[21]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(21),
	o => \a[21]~input_o\);

-- Location: LCCOMB_X30_Y13_N10
\ulas_30:21:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:21:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\b[21]~input_o\) # (\a[21]~input_o\))) # (!\operation[0]~input_o\ & (\b[21]~input_o\ & \a[21]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datac => \b[21]~input_o\,
	datad => \a[21]~input_o\,
	combout => \ulas_30:21:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y13_N24
\ulas_30:21:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:21:ula30|somador1b|somador2|soma~0_combout\ = \a[21]~input_o\ $ (((!\binvert~input_o\ & \b[21]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010111101010000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \binvert~input_o\,
	datac => \b[21]~input_o\,
	datad => \a[21]~input_o\,
	combout => \ulas_30:21:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y13_N4
\ulas_30:21:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:21:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:21:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:21:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:21:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:21:ula30|somador1b|somador2|soma~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ula0|mux4|Mux0~0_combout\,
	combout => \ulas_30:21:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y12_N1
\a[22]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(22),
	o => \a[22]~input_o\);

-- Location: IOIBUF_X31_Y11_N15
\b[22]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(22),
	o => \b[22]~input_o\);

-- Location: LCCOMB_X29_Y11_N10
\ulas_30:22:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:22:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\a[22]~input_o\) # (\b[22]~input_o\))) # (!\operation[0]~input_o\ & (\a[22]~input_o\ & \b[22]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datac => \a[22]~input_o\,
	datad => \b[22]~input_o\,
	combout => \ulas_30:22:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X29_Y11_N24
\ulas_30:22:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:22:ula30|somador1b|somador2|soma~0_combout\ = \a[22]~input_o\ $ (((!\binvert~input_o\ & \b[22]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100001111110000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \binvert~input_o\,
	datac => \a[22]~input_o\,
	datad => \b[22]~input_o\,
	combout => \ulas_30:22:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X29_Y11_N20
\ulas_30:22:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:22:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:22:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:22:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:22:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:22:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:22:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y17_N1
\a[23]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(23),
	o => \a[23]~input_o\);

-- Location: IOIBUF_X31_Y22_N15
\b[23]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(23),
	o => \b[23]~input_o\);

-- Location: LCCOMB_X30_Y17_N10
\ulas_30:23:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:23:ula30|mux4|Mux0~0_combout\ = (\a[23]~input_o\ & ((\operation[0]~input_o\) # (\b[23]~input_o\))) # (!\a[23]~input_o\ & (\operation[0]~input_o\ & \b[23]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[23]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \b[23]~input_o\,
	combout => \ulas_30:23:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y17_N24
\ulas_30:23:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:23:ula30|somador1b|somador2|soma~0_combout\ = \a[23]~input_o\ $ (((!\binvert~input_o\ & \b[23]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1001100111001100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \binvert~input_o\,
	datab => \a[23]~input_o\,
	datad => \b[23]~input_o\,
	combout => \ulas_30:23:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y17_N4
\ulas_30:23:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:23:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:23:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:23:ula30|mux4|Mux0~0_combout\ & (!\operation[2]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100111000000010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:23:ula30|mux4|Mux0~0_combout\,
	datab => \ula0|mux4|Mux0~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:23:ula30|somador1b|somador2|soma~0_combout\,
	combout => \ulas_30:23:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X22_Y25_N22
\a[24]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(24),
	o => \a[24]~input_o\);

-- Location: IOIBUF_X22_Y25_N15
\b[24]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(24),
	o => \b[24]~input_o\);

-- Location: LCCOMB_X23_Y20_N10
\ulas_30:24:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:24:ula30|mux4|Mux0~0_combout\ = (\a[24]~input_o\ & ((\operation[0]~input_o\) # (\b[24]~input_o\))) # (!\a[24]~input_o\ & (\operation[0]~input_o\ & \b[24]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[24]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \b[24]~input_o\,
	combout => \ulas_30:24:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X23_Y20_N24
\ulas_30:24:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:24:ula30|somador1b|somador2|soma~0_combout\ = \a[24]~input_o\ $ (((!\binvert~input_o\ & \b[24]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010010110101010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[24]~input_o\,
	datac => \binvert~input_o\,
	datad => \b[24]~input_o\,
	combout => \ulas_30:24:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X23_Y20_N28
\ulas_30:24:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:24:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:24:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:24:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:24:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:24:ula30|somador1b|somador2|soma~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ula0|mux4|Mux0~0_combout\,
	combout => \ulas_30:24:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y1_N8
\b[25]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(25),
	o => \b[25]~input_o\);

-- Location: IOIBUF_X31_Y3_N1
\a[25]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(25),
	o => \a[25]~input_o\);

-- Location: LCCOMB_X30_Y3_N10
\ulas_30:25:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:25:ula30|mux4|Mux0~0_combout\ = (\b[25]~input_o\ & ((\a[25]~input_o\) # (\operation[0]~input_o\))) # (!\b[25]~input_o\ & (\a[25]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[25]~input_o\,
	datac => \a[25]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ulas_30:25:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y3_N24
\ulas_30:25:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:25:ula30|somador1b|somador2|soma~0_combout\ = \a[25]~input_o\ $ (((\b[25]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111000001011010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \b[25]~input_o\,
	datac => \a[25]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:25:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y3_N4
\ulas_30:25:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:25:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:25:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:25:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:25:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:25:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:25:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y6_N8
\a[26]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(26),
	o => \a[26]~input_o\);

-- Location: IOIBUF_X31_Y6_N15
\b[26]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(26),
	o => \b[26]~input_o\);

-- Location: LCCOMB_X30_Y6_N10
\ulas_30:26:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:26:ula30|mux4|Mux0~0_combout\ = (\a[26]~input_o\ & ((\operation[0]~input_o\) # (\b[26]~input_o\))) # (!\a[26]~input_o\ & (\operation[0]~input_o\ & \b[26]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111101010100000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[26]~input_o\,
	datac => \operation[0]~input_o\,
	datad => \b[26]~input_o\,
	combout => \ulas_30:26:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y6_N24
\ulas_30:26:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:26:ula30|somador1b|somador2|soma~0_combout\ = \a[26]~input_o\ $ (((!\binvert~input_o\ & \b[26]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010010110101010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[26]~input_o\,
	datac => \binvert~input_o\,
	datad => \b[26]~input_o\,
	combout => \ulas_30:26:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y6_N4
\ulas_30:26:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:26:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:26:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:26:ula30|mux4|Mux0~0_combout\ & (!\operation[2]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100111000000010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:26:ula30|mux4|Mux0~0_combout\,
	datab => \ula0|mux4|Mux0~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ulas_30:26:ula30|somador1b|somador2|soma~0_combout\,
	combout => \ulas_30:26:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X17_Y25_N8
\a[27]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(27),
	o => \a[27]~input_o\);

-- Location: IOIBUF_X15_Y25_N8
\b[27]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(27),
	o => \b[27]~input_o\);

-- Location: LCCOMB_X17_Y21_N10
\ulas_30:27:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:27:ula30|mux4|Mux0~0_combout\ = (\a[27]~input_o\ & ((\b[27]~input_o\) # (\operation[0]~input_o\))) # (!\a[27]~input_o\ & (\b[27]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1110111010001000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[27]~input_o\,
	datab => \b[27]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ulas_30:27:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X17_Y21_N24
\ulas_30:27:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:27:ula30|somador1b|somador2|soma~0_combout\ = \a[27]~input_o\ $ (((\b[27]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010101001100110",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \a[27]~input_o\,
	datab => \b[27]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:27:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X17_Y21_N4
\ulas_30:27:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:27:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:27:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:27:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:27:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:27:ula30|somador1b|somador2|soma~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ula0|mux4|Mux0~0_combout\,
	combout => \ulas_30:27:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X10_Y15_N22
\a[28]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(28),
	o => \a[28]~input_o\);

-- Location: IOIBUF_X10_Y15_N15
\b[28]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(28),
	o => \b[28]~input_o\);

-- Location: LCCOMB_X13_Y11_N10
\ulas_30:28:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:28:ula30|mux4|Mux0~0_combout\ = (\a[28]~input_o\ & ((\b[28]~input_o\) # (\operation[0]~input_o\))) # (!\a[28]~input_o\ & (\b[28]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[28]~input_o\,
	datac => \b[28]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ulas_30:28:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X13_Y11_N24
\ulas_30:28:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:28:ula30|somador1b|somador2|soma~0_combout\ = \a[28]~input_o\ $ (((\b[28]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000111100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[28]~input_o\,
	datac => \b[28]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:28:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X13_Y11_N12
\ulas_30:28:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:28:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:28:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:28:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:28:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:28:ula30|somador1b|somador2|soma~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ula0|mux4|Mux0~0_combout\,
	combout => \ulas_30:28:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y2_N15
\b[29]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(29),
	o => \b[29]~input_o\);

-- Location: IOIBUF_X31_Y5_N8
\a[29]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(29),
	o => \a[29]~input_o\);

-- Location: LCCOMB_X29_Y5_N10
\ulas_30:29:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:29:ula30|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\b[29]~input_o\) # (\a[29]~input_o\))) # (!\operation[0]~input_o\ & (\b[29]~input_o\ & \a[29]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \operation[0]~input_o\,
	datac => \b[29]~input_o\,
	datad => \a[29]~input_o\,
	combout => \ulas_30:29:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X29_Y5_N24
\ulas_30:29:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:29:ula30|somador1b|somador2|soma~0_combout\ = \a[29]~input_o\ $ (((!\binvert~input_o\ & \b[29]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1010111101010000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \binvert~input_o\,
	datac => \b[29]~input_o\,
	datad => \a[29]~input_o\,
	combout => \ulas_30:29:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X29_Y5_N4
\ulas_30:29:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:29:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:29:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:29:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:29:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:29:ula30|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ulas_30:29:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X24_Y0_N1
\a[30]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(30),
	o => \a[30]~input_o\);

-- Location: IOIBUF_X22_Y0_N22
\b[30]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(30),
	o => \b[30]~input_o\);

-- Location: LCCOMB_X23_Y4_N10
\ulas_30:30:ula30|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:30:ula30|mux4|Mux0~0_combout\ = (\a[30]~input_o\ & ((\b[30]~input_o\) # (\operation[0]~input_o\))) # (!\a[30]~input_o\ & (\b[30]~input_o\ & \operation[0]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[30]~input_o\,
	datac => \b[30]~input_o\,
	datad => \operation[0]~input_o\,
	combout => \ulas_30:30:ula30|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X23_Y4_N24
\ulas_30:30:ula30|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:30:ula30|somador1b|somador2|soma~0_combout\ = \a[30]~input_o\ $ (((\b[30]~input_o\ & !\binvert~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000111100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[30]~input_o\,
	datac => \b[30]~input_o\,
	datad => \binvert~input_o\,
	combout => \ulas_30:30:ula30|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X23_Y4_N28
\ulas_30:30:ula30|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ulas_30:30:ula30|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ulas_30:30:ula30|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ulas_30:30:ula30|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100110000001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ulas_30:30:ula30|mux4|Mux0~0_combout\,
	datab => \ulas_30:30:ula30|somador1b|somador2|soma~0_combout\,
	datac => \operation[2]~input_o\,
	datad => \ula0|mux4|Mux0~0_combout\,
	combout => \ulas_30:30:ula30|mux4|Mux0~1_combout\);

-- Location: IOIBUF_X31_Y9_N1
\a[31]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_a(31),
	o => \a[31]~input_o\);

-- Location: IOIBUF_X31_Y9_N8
\b[31]~input\ : fiftyfivenm_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	listen_to_nsleep_signal => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_b(31),
	o => \b[31]~input_o\);

-- Location: LCCOMB_X30_Y9_N10
\ula31|mux4|Mux0~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ula31|mux4|Mux0~0_combout\ = (\operation[0]~input_o\ & ((\a[31]~input_o\) # (\b[31]~input_o\))) # (!\operation[0]~input_o\ & (\a[31]~input_o\ & \b[31]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1110111010001000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \operation[0]~input_o\,
	datab => \a[31]~input_o\,
	datad => \b[31]~input_o\,
	combout => \ula31|mux4|Mux0~0_combout\);

-- Location: LCCOMB_X30_Y9_N24
\ula31|somador1b|somador2|soma~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ula31|somador1b|somador2|soma~0_combout\ = \a[31]~input_o\ $ (((!\binvert~input_o\ & \b[31]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100001111001100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[31]~input_o\,
	datac => \binvert~input_o\,
	datad => \b[31]~input_o\,
	combout => \ula31|somador1b|somador2|soma~0_combout\);

-- Location: LCCOMB_X30_Y9_N4
\ula31|mux4|Mux0~1\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ula31|mux4|Mux0~1_combout\ = (\ula0|mux4|Mux0~0_combout\ & (((\ula31|somador1b|somador2|soma~0_combout\)))) # (!\ula0|mux4|Mux0~0_combout\ & (\ula31|mux4|Mux0~0_combout\ & ((!\operation[2]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011001010",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \ula31|mux4|Mux0~0_combout\,
	datab => \ula31|somador1b|somador2|soma~0_combout\,
	datac => \ula0|mux4|Mux0~0_combout\,
	datad => \operation[2]~input_o\,
	combout => \ula31|mux4|Mux0~1_combout\);

-- Location: LCCOMB_X30_Y9_N22
\ula31|somador1b|carry~0\ : fiftyfivenm_lcell_comb
-- Equation(s):
-- \ula31|somador1b|carry~0_combout\ = (\binvert~input_o\) # ((\a[31]~input_o\ & \b[31]~input_o\))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111110011110000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \a[31]~input_o\,
	datac => \binvert~input_o\,
	datad => \b[31]~input_o\,
	combout => \ula31|somador1b|carry~0_combout\);

-- Location: UNVM_X0_Y11_N40
\~QUARTUS_CREATED_UNVM~\ : fiftyfivenm_unvm
-- pragma translate_off
GENERIC MAP (
	addr_range1_end_addr => -1,
	addr_range1_offset => -1,
	addr_range2_end_addr => -1,
	addr_range2_offset => -1,
	addr_range3_offset => -1,
	is_compressed_image => "false",
	is_dual_boot => "false",
	is_eram_skip => "false",
	max_ufm_valid_addr => -1,
	max_valid_addr => -1,
	min_ufm_valid_addr => -1,
	min_valid_addr => -1,
	part_name => "quartus_created_unvm",
	reserve_block => "true")
-- pragma translate_on
PORT MAP (
	nosc_ena => \~QUARTUS_CREATED_GND~I_combout\,
	xe_ye => \~QUARTUS_CREATED_GND~I_combout\,
	se => \~QUARTUS_CREATED_GND~I_combout\,
	busy => \~QUARTUS_CREATED_UNVM~~busy\);

-- Location: ADCBLOCK_X10_Y24_N0
\~QUARTUS_CREATED_ADC1~\ : fiftyfivenm_adcblock
-- pragma translate_off
GENERIC MAP (
	analog_input_pin_mask => 0,
	clkdiv => 1,
	device_partname_fivechar_prefix => "none",
	is_this_first_or_second_adc => 1,
	prescalar => 0,
	pwd => 1,
	refsel => 0,
	reserve_block => "true",
	testbits => 66,
	tsclkdiv => 1,
	tsclksel => 0)
-- pragma translate_on
PORT MAP (
	soc => \~QUARTUS_CREATED_GND~I_combout\,
	usr_pwd => VCC,
	tsen => \~QUARTUS_CREATED_GND~I_combout\,
	chsel => \~QUARTUS_CREATED_ADC1~_CHSEL_bus\,
	eoc => \~QUARTUS_CREATED_ADC1~~eoc\);

ww_resultado(0) <= \resultado[0]~output_o\;

ww_resultado(1) <= \resultado[1]~output_o\;

ww_resultado(2) <= \resultado[2]~output_o\;

ww_resultado(3) <= \resultado[3]~output_o\;

ww_resultado(4) <= \resultado[4]~output_o\;

ww_resultado(5) <= \resultado[5]~output_o\;

ww_resultado(6) <= \resultado[6]~output_o\;

ww_resultado(7) <= \resultado[7]~output_o\;

ww_resultado(8) <= \resultado[8]~output_o\;

ww_resultado(9) <= \resultado[9]~output_o\;

ww_resultado(10) <= \resultado[10]~output_o\;

ww_resultado(11) <= \resultado[11]~output_o\;

ww_resultado(12) <= \resultado[12]~output_o\;

ww_resultado(13) <= \resultado[13]~output_o\;

ww_resultado(14) <= \resultado[14]~output_o\;

ww_resultado(15) <= \resultado[15]~output_o\;

ww_resultado(16) <= \resultado[16]~output_o\;

ww_resultado(17) <= \resultado[17]~output_o\;

ww_resultado(18) <= \resultado[18]~output_o\;

ww_resultado(19) <= \resultado[19]~output_o\;

ww_resultado(20) <= \resultado[20]~output_o\;

ww_resultado(21) <= \resultado[21]~output_o\;

ww_resultado(22) <= \resultado[22]~output_o\;

ww_resultado(23) <= \resultado[23]~output_o\;

ww_resultado(24) <= \resultado[24]~output_o\;

ww_resultado(25) <= \resultado[25]~output_o\;

ww_resultado(26) <= \resultado[26]~output_o\;

ww_resultado(27) <= \resultado[27]~output_o\;

ww_resultado(28) <= \resultado[28]~output_o\;

ww_resultado(29) <= \resultado[29]~output_o\;

ww_resultado(30) <= \resultado[30]~output_o\;

ww_resultado(31) <= \resultado[31]~output_o\;

ww_zero <= \zero~output_o\;

ww_overflow <= \overflow~output_o\;
END structure;


