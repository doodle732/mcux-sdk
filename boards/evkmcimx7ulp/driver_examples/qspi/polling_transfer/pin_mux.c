/*
 * Copyright 2020 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: MCIMX7U5xxxxx
package_id: MCIMX7U5DVP07
mcu_data: ksdk2_0
processor_version: 8.0.1
board: MCIMX7ULP-EVK-REV-B
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'false', prefix: BOARD_, coreID: cm4}
- pin_list:
  - {pin_num: AB19, peripheral: LPUART0, signal: lpuart_rx, pin_signal: PTA19, PE: PE_1_pull_enabled, PS: PS_1_pull_up}
  - {pin_num: AC19, peripheral: LPUART0, signal: lpuart_tx, pin_signal: PTA18, PE: PE_1_pull_enabled, PS: PS_1_pull_up}
  - {pin_num: AD10, peripheral: QSPIA, signal: 'qspia_data, 0', pin_signal: PTB19}
  - {pin_num: AG10, peripheral: QSPIA, signal: 'qspia_data, 1', pin_signal: PTB18}
  - {pin_num: AF10, peripheral: QSPIA, signal: 'qspia_data, 2', pin_signal: PTB17}
  - {pin_num: AF9, peripheral: QSPIA, signal: 'qspia_data, 3', pin_signal: PTB16}
  - {pin_num: AF8, peripheral: QSPIA, signal: qspia_sclk, pin_signal: PTB15}
  - {pin_num: AG6, peripheral: QSPIA, signal: 'qspia_ss_b, 0', pin_signal: PTB8}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M4[cm4] */
    IOMUXC_SetPinMux(BOARD_UART0_TX_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinConfig(BOARD_UART0_TX_PIN_FUNCTION_ID,
                        IOMUXC0_SW_MUX_CTL_PAD_PE_MASK |
                        IOMUXC0_SW_MUX_CTL_PAD_PS_MASK);
    IOMUXC_SetPinMux(BOARD_UART0_RX_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinConfig(BOARD_UART0_RX_PIN_FUNCTION_ID,
                        IOMUXC0_SW_MUX_CTL_PAD_PE_MASK |
                        IOMUXC0_SW_MUX_CTL_PAD_PS_MASK);
    IOMUXC_SetPinMux(BOARD_QSPIA_SCLK_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinMux(BOARD_QSPIA_DATA3_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinMux(BOARD_QSPIA_DATA2_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinMux(BOARD_QSPIA_DATA1_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinMux(BOARD_QSPIA_DATA0_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinMux(BOARD_QSPIA_SS0_B_PIN_FUNCTION_ID, 0U);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/