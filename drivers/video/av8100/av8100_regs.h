
#define AV8100_VAL2REG(__reg, __fld, __val) \
	(((__val) << __reg##_##__fld##_SHIFT) & __reg##_##__fld##_MASK)
#define AV8100_REG2VAL(__reg, __fld, __val) \
	(((__val) & __reg##_##__fld##_MASK) >> __reg##_##__fld##_SHIFT)

#define AV8100_STANDBY 0x00000000
#define AV8100_STANDBY_CPD_SHIFT 0
#define AV8100_STANDBY_CPD_MASK 0x00000001
#define AV8100_STANDBY_CPD_HIGH 1
#define AV8100_STANDBY_CPD_LOW 0
#define AV8100_STANDBY_CPD(__x) \
	AV8100_VAL2REG(AV8100_STANDBY, CPD, __x)
#define AV8100_STANDBY_CPD_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY, CPD, __x)
#define AV8100_STANDBY_STBY_SHIFT 1
#define AV8100_STANDBY_STBY_MASK 0x00000002
#define AV8100_STANDBY_STBY_HIGH 1
#define AV8100_STANDBY_STBY_LOW 0
#define AV8100_STANDBY_STBY(__x) \
	AV8100_VAL2REG(AV8100_STANDBY, STBY, __x)
#define AV8100_STANDBY_STBY_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY, STBY, __x)
#define AV8100_STANDBY_HPDS_SHIFT 2
#define AV8100_STANDBY_HPDS_MASK 0x00000004
#define AV8100_STANDBY_HPDS(__x) \
	AV8100_VAL2REG(AV8100_STANDBY, HPDS, __x)
#define AV8100_STANDBY_HPDS_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY, HPDS, __x)
#define AV8100_STANDBY_CPDS_SHIFT 3
#define AV8100_STANDBY_CPDS_MASK 0x00000008
#define AV8100_STANDBY_CPDS(__x) \
	AV8100_VAL2REG(AV8100_STANDBY, CPDS, __x)
#define AV8100_STANDBY_CPDS_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY, CPDS, __x)
#define AV8100_STANDBY_MCLKRNG_SHIFT 4
#define AV8100_STANDBY_MCLKRNG_MASK 0x000000F0
#define AV8100_STANDBY_MCLKRNG(__x) \
	AV8100_VAL2REG(AV8100_STANDBY, MCLKRNG, __x)
#define AV8100_STANDBY_MCLKRNG_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY, MCLKRNG, __x)
#define AV8100_HDMI_5_VOLT_TIME 0x00000001
#define AV8100_HDMI_5_VOLT_TIME_OFF_TIME_SHIFT 0
#define AV8100_HDMI_5_VOLT_TIME_OFF_TIME_MASK 0x0000001F
#define AV8100_HDMI_5_VOLT_TIME_OFF_TIME(__x) \
	AV8100_VAL2REG(AV8100_HDMI_5_VOLT_TIME, OFF_TIME, __x)
#define AV8100_HDMI_5_VOLT_TIME_OFF_TIME_GET(__x) \
	AV8100_REG2VAL(AV8100_HDMI_5_VOLT_TIME, OFF_TIME, __x)
#define AV8100_HDMI_5_VOLT_TIME_DAC_OFF_TIME_SHIFT 0
#define AV8100_HDMI_5_VOLT_TIME_DAC_OFF_TIME_MASK 0x00000003
#define AV8100_HDMI_5_VOLT_TIME_DAC_OFF_TIME(__x) \
	AV8100_VAL2REG(AV8100_HDMI_5_VOLT_TIME, DAC_OFF_TIME, __x)
#define AV8100_HDMI_5_VOLT_TIME_DAC_OFF_TIME_GET(__x) \
	AV8100_REG2VAL(AV8100_HDMI_5_VOLT_TIME, DAC_OFF_TIME, __x)
#define AV8100_HDMI_5_VOLT_TIME_SU_OFF_TIME_SHIFT 2
#define AV8100_HDMI_5_VOLT_TIME_SU_OFF_TIME_MASK 0x0000001C
#define AV8100_HDMI_5_VOLT_TIME_SU_OFF_TIME(__x) \
	AV8100_VAL2REG(AV8100_HDMI_5_VOLT_TIME, SU_OFF_TIME, __x)
#define AV8100_HDMI_5_VOLT_TIME_SU_OFF_TIME_GET(__x) \
	AV8100_REG2VAL(AV8100_HDMI_5_VOLT_TIME, SU_OFF_TIME, __x)
#define AV8100_HDMI_5_VOLT_TIME_ON_TIME_SHIFT 5
#define AV8100_HDMI_5_VOLT_TIME_ON_TIME_MASK 0x000000E0
#define AV8100_HDMI_5_VOLT_TIME_ON_TIME(__x) \
	AV8100_VAL2REG(AV8100_HDMI_5_VOLT_TIME, ON_TIME, __x)
#define AV8100_HDMI_5_VOLT_TIME_ON_TIME_GET(__x) \
	AV8100_REG2VAL(AV8100_HDMI_5_VOLT_TIME, ON_TIME, __x)
#define AV8100_STANDBY_INTERRUPT_MASK 0x00000002
#define AV8100_STANDBY_INTERRUPT_MASK_HPDM_SHIFT 0
#define AV8100_STANDBY_INTERRUPT_MASK_HPDM_MASK 0x00000001
#define AV8100_STANDBY_INTERRUPT_MASK_HPDM_HIGH 1
#define AV8100_STANDBY_INTERRUPT_MASK_HPDM_LOW 0
#define AV8100_STANDBY_INTERRUPT_MASK_HPDM(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_INTERRUPT_MASK, HPDM, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_HPDM_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_INTERRUPT_MASK, HPDM, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_CPDM_SHIFT 1
#define AV8100_STANDBY_INTERRUPT_MASK_CPDM_MASK 0x00000002
#define AV8100_STANDBY_INTERRUPT_MASK_CPDM_HIGH 1
#define AV8100_STANDBY_INTERRUPT_MASK_CPDM_LOW 0
#define AV8100_STANDBY_INTERRUPT_MASK_CPDM(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_INTERRUPT_MASK, CPDM, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_CPDM_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_INTERRUPT_MASK, CPDM, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_CCM_SHIFT 3
#define AV8100_STANDBY_INTERRUPT_MASK_CCM_MASK 0x00000008
#define AV8100_STANDBY_INTERRUPT_MASK_CCM_HIGH 1
#define AV8100_STANDBY_INTERRUPT_MASK_CCM_LOW 0
#define AV8100_STANDBY_INTERRUPT_MASK_CCM(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_INTERRUPT_MASK, CCM, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_CCM_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_INTERRUPT_MASK, CCM, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_STBYGPIOCFG_SHIFT 4
#define AV8100_STANDBY_INTERRUPT_MASK_STBYGPIOCFG_MASK 0x0000000C
#define AV8100_STANDBY_INTERRUPT_MASK_STBYGPIOCFG_INPUT 0x00
#define AV8100_STANDBY_INTERRUPT_MASK_STBYGPIOCFG_ALT 0x01
#define AV8100_STANDBY_INTERRUPT_MASK_STBYGPIOCFG_OUTPUT0 0x02
#define AV8100_STANDBY_INTERRUPT_MASK_STBYGPIOCFG_OUTPUT1 0x03
#define AV8100_STANDBY_INTERRUPT_MASK_STBYGPIOCFG(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_INTERRUPT_MASK, STBYGPIOCFG, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_STBYGPIOCFG_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_INTERRUPT_MASK, STBYGPIOCFG, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_IPOL_SHIFT 7
#define AV8100_STANDBY_INTERRUPT_MASK_IPOL_MASK 0x00000080
#define AV8100_STANDBY_INTERRUPT_MASK_IPOL_HIGH 1
#define AV8100_STANDBY_INTERRUPT_MASK_IPOL_LOW 0
#define AV8100_STANDBY_INTERRUPT_MASK_IPOL(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_INTERRUPT_MASK, IPOL, __x)
#define AV8100_STANDBY_INTERRUPT_MASK_IPOL_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_INTERRUPT_MASK, IPOL, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT 0x00000003
#define AV8100_STANDBY_PENDING_INTERRUPT_HPDI_SHIFT 0
#define AV8100_STANDBY_PENDING_INTERRUPT_HPDI_MASK 0x00000001
#define AV8100_STANDBY_PENDING_INTERRUPT_HPDI_HIGH 1
#define AV8100_STANDBY_PENDING_INTERRUPT_HPDI_LOW 0
#define AV8100_STANDBY_PENDING_INTERRUPT_HPDI(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_PENDING_INTERRUPT, HPDI, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_HPDI_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_PENDING_INTERRUPT, HPDI, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_CPDI_SHIFT 1
#define AV8100_STANDBY_PENDING_INTERRUPT_CPDI_MASK 0x00000002
#define AV8100_STANDBY_PENDING_INTERRUPT_CPDI_HIGH 1
#define AV8100_STANDBY_PENDING_INTERRUPT_CPDI_LOW 0
#define AV8100_STANDBY_PENDING_INTERRUPT_CPDI(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_PENDING_INTERRUPT, CPDI, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_CPDI_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_PENDING_INTERRUPT, CPDI, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_ONI_SHIFT 2
#define AV8100_STANDBY_PENDING_INTERRUPT_ONI_MASK 0x00000004
#define AV8100_STANDBY_PENDING_INTERRUPT_ONI_HIGH 1
#define AV8100_STANDBY_PENDING_INTERRUPT_ONI_LOW 0
#define AV8100_STANDBY_PENDING_INTERRUPT_ONI(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_PENDING_INTERRUPT, ONI, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_ONI_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_PENDING_INTERRUPT, ONI, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_CCI_SHIFT 3
#define AV8100_STANDBY_PENDING_INTERRUPT_CCI_MASK 0x00000008
#define AV8100_STANDBY_PENDING_INTERRUPT_CCI_HIGH 1
#define AV8100_STANDBY_PENDING_INTERRUPT_CCI_LOW 0
#define AV8100_STANDBY_PENDING_INTERRUPT_CCI(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_PENDING_INTERRUPT, CCI, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_CCI_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_PENDING_INTERRUPT, CCI, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_SID_SHIFT 4
#define AV8100_STANDBY_PENDING_INTERRUPT_SID_MASK 0x000000F0
#define AV8100_STANDBY_PENDING_INTERRUPT_SID(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_PENDING_INTERRUPT, SID, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_SID_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_PENDING_INTERRUPT, SID, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_CCRST_SHIFT 5
#define AV8100_STANDBY_PENDING_INTERRUPT_CCRST_MASK 0x00000020
#define AV8100_STANDBY_PENDING_INTERRUPT_CCRST_HIGH 1
#define AV8100_STANDBY_PENDING_INTERRUPT_CCRST_LOW 0
#define AV8100_STANDBY_PENDING_INTERRUPT_CCRST(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_PENDING_INTERRUPT, CCRST, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_CCRST_GET(__x) \
	AV8100_REG2VAL(AV8100_STANDBY_PENDING_INTERRUPT, CCRST, __x)
#define AV8100_STANDBY_PENDING_INTERRUPT_BPDIG_SHIFT 6
#define AV8100_STANDBY_PENDING_INTERRUPT_BPDIG_MASK 0x00000040
#define AV8100_STANDBY_PENDING_INTERRUPT_BPDIG_HIGH 1
#define AV8100_STANDBY_PENDING_INTERRUPT_BPDIG_LOW 0
#define AV8100_STANDBY_PENDING_INTERRUPT_BPDIG(__x) \
	AV8100_VAL2REG(AV8100_STANDBY_PENDING_INTERRUPT, BPDIG, __x)
#define AV8100_GENERAL_INTERRUPT_MASK 0x00000004
#define AV8100_GENERAL_INTERRUPT_MASK_EOCM_SHIFT 0
#define AV8100_GENERAL_INTERRUPT_MASK_EOCM_MASK 0x00000001
#define AV8100_GENERAL_INTERRUPT_MASK_EOCM_HIGH 1
#define AV8100_GENERAL_INTERRUPT_MASK_EOCM_LOW 0
#define AV8100_GENERAL_INTERRUPT_MASK_EOCM(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT_MASK, EOCM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_EOCM_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT_MASK, EOCM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_VSIM_SHIFT 1
#define AV8100_GENERAL_INTERRUPT_MASK_VSIM_MASK 0x00000002
#define AV8100_GENERAL_INTERRUPT_MASK_VSIM_HIGH 1
#define AV8100_GENERAL_INTERRUPT_MASK_VSIM_LOW 0
#define AV8100_GENERAL_INTERRUPT_MASK_VSIM(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT_MASK, VSIM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_VSIM_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT_MASK, VSIM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_VSOM_SHIFT 2
#define AV8100_GENERAL_INTERRUPT_MASK_VSOM_MASK 0x00000004
#define AV8100_GENERAL_INTERRUPT_MASK_VSOM_HIGH 1
#define AV8100_GENERAL_INTERRUPT_MASK_VSOM_LOW 0
#define AV8100_GENERAL_INTERRUPT_MASK_VSOM(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT_MASK, VSOM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_VSOM_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT_MASK, VSOM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_CECM_SHIFT 3
#define AV8100_GENERAL_INTERRUPT_MASK_CECM_MASK 0x00000008
#define AV8100_GENERAL_INTERRUPT_MASK_CECM_HIGH 1
#define AV8100_GENERAL_INTERRUPT_MASK_CECM_LOW 0
#define AV8100_GENERAL_INTERRUPT_MASK_CECM(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT_MASK, CECM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_CECM_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT_MASK, CECM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_HDCPM_SHIFT 4
#define AV8100_GENERAL_INTERRUPT_MASK_HDCPM_MASK 0x00000010
#define AV8100_GENERAL_INTERRUPT_MASK_HDCPM_HIGH 1
#define AV8100_GENERAL_INTERRUPT_MASK_HDCPM_LOW 0
#define AV8100_GENERAL_INTERRUPT_MASK_HDCPM(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT_MASK, HDCPM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_HDCPM_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT_MASK, HDCPM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_UOVBM_SHIFT 5
#define AV8100_GENERAL_INTERRUPT_MASK_UOVBM_MASK 0x00000020
#define AV8100_GENERAL_INTERRUPT_MASK_UOVBM_HIGH 1
#define AV8100_GENERAL_INTERRUPT_MASK_UOVBM_LOW 0
#define AV8100_GENERAL_INTERRUPT_MASK_UOVBM(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT_MASK, UOVBM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_UOVBM_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT_MASK, UOVBM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_TEM_SHIFT 6
#define AV8100_GENERAL_INTERRUPT_MASK_TEM_MASK 0x00000040
#define AV8100_GENERAL_INTERRUPT_MASK_TEM_HIGH 1
#define AV8100_GENERAL_INTERRUPT_MASK_TEM_LOW 0
#define AV8100_GENERAL_INTERRUPT_MASK_TEM(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT_MASK, TEM, __x)
#define AV8100_GENERAL_INTERRUPT_MASK_TEM_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT_MASK, TEM, __x)
#define AV8100_GENERAL_INTERRUPT 0x00000005
#define AV8100_GENERAL_INTERRUPT_EOCI_SHIFT 0
#define AV8100_GENERAL_INTERRUPT_EOCI_MASK 0x00000001
#define AV8100_GENERAL_INTERRUPT_EOCI(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT, EOCI, __x)
#define AV8100_GENERAL_INTERRUPT_EOCI_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT, EOCI, __x)
#define AV8100_GENERAL_INTERRUPT_VSII_SHIFT 1
#define AV8100_GENERAL_INTERRUPT_VSII_MASK 0x00000002
#define AV8100_GENERAL_INTERRUPT_VSII(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT, VSII, __x)
#define AV8100_GENERAL_INTERRUPT_VSII_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT, VSII, __x)
#define AV8100_GENERAL_INTERRUPT_VSOI_SHIFT 2
#define AV8100_GENERAL_INTERRUPT_VSOI_MASK 0x00000004
#define AV8100_GENERAL_INTERRUPT_VSOI(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT, VSOI, __x)
#define AV8100_GENERAL_INTERRUPT_VSOI_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT, VSOI, __x)
#define AV8100_GENERAL_INTERRUPT_CECI_SHIFT 3
#define AV8100_GENERAL_INTERRUPT_CECI_MASK 0x00000008
#define AV8100_GENERAL_INTERRUPT_CECI(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT, CECI, __x)
#define AV8100_GENERAL_INTERRUPT_CECI_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT, CECI, __x)
#define AV8100_GENERAL_INTERRUPT_HDCPI_SHIFT 4
#define AV8100_GENERAL_INTERRUPT_HDCPI_MASK 0x00000010
#define AV8100_GENERAL_INTERRUPT_HDCPI(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT, HDCPI, __x)
#define AV8100_GENERAL_INTERRUPT_HDCPI_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT, HDCPI, __x)
#define AV8100_GENERAL_INTERRUPT_UOVBI_SHIFT 5
#define AV8100_GENERAL_INTERRUPT_UOVBI_MASK 0x00000020
#define AV8100_GENERAL_INTERRUPT_UOVBI(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT, UOVBI, __x)
#define AV8100_GENERAL_INTERRUPT_UOVBI_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT, UOVBI, __x)
#define AV8100_GENERAL_INTERRUPT_TEI_SHIFT 6
#define AV8100_GENERAL_INTERRUPT_TEI_MASK 0x00000040
#define AV8100_GENERAL_INTERRUPT_TEI(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_INTERRUPT, TEI, __x)
#define AV8100_GENERAL_INTERRUPT_TEI_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_INTERRUPT, TEI, __x)
#define AV8100_GENERAL_STATUS 0x00000006
#define AV8100_GENERAL_STATUS_CECTXERR_SHIFT 0
#define AV8100_GENERAL_STATUS_CECTXERR_MASK 0x00000001
#define AV8100_GENERAL_STATUS_CECTXERR_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_STATUS, CECTXERR, __x)
#define AV8100_GENERAL_STATUS_CECREC_SHIFT 1
#define AV8100_GENERAL_STATUS_CECREC_MASK 0x00000002
#define AV8100_GENERAL_STATUS_CECREC_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_STATUS, CECREC, __x)
#define AV8100_GENERAL_STATUS_CECTRX_SHIFT 2
#define AV8100_GENERAL_STATUS_CECTRX_MASK 0x00000004
#define AV8100_GENERAL_STATUS_CECTRX_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_STATUS, CECTRX, __x)
#define AV8100_GENERAL_STATUS_UC_SHIFT 3
#define AV8100_GENERAL_STATUS_UC_MASK 0x00000008
#define AV8100_GENERAL_STATUS_UC_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_STATUS, UC, __x)
#define AV8100_GENERAL_STATUS_ONUVB_SHIFT 4
#define AV8100_GENERAL_STATUS_ONUVB_MASK 0x00000010
#define AV8100_GENERAL_STATUS_ONUVB_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_STATUS, ONUVB, __x)
#define AV8100_GENERAL_STATUS_HDCPS_SHIFT 5
#define AV8100_GENERAL_STATUS_HDCPS_MASK 0x000000E0
#define AV8100_GENERAL_STATUS_HDCPS_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_STATUS, HDCPS, __x)
#define AV8100_GPIO_CONFIGURATION 0x00000007
#define AV8100_GPIO_CONFIGURATION_DAT3DIR_SHIFT 0
#define AV8100_GPIO_CONFIGURATION_DAT3DIR_MASK 0x00000001
#define AV8100_GPIO_CONFIGURATION_DAT3DIR(__x) \
	AV8100_VAL2REG(AV8100_GPIO_CONFIGURATION, DAT3DIR, __x)
#define AV8100_GPIO_CONFIGURATION_DAT3DIR_GET(__x) \
	AV8100_REG2VAL(AV8100_GPIO_CONFIGURATION, DAT3DIR, __x)
#define AV8100_GPIO_CONFIGURATION_DAT3VAL_SHIFT 1
#define AV8100_GPIO_CONFIGURATION_DAT3VAL_MASK 0x00000002
#define AV8100_GPIO_CONFIGURATION_DAT3VAL(__x) \
	AV8100_VAL2REG(AV8100_GPIO_CONFIGURATION, DAT3VAL, __x)
#define AV8100_GPIO_CONFIGURATION_DAT3VAL_GET(__x) \
	AV8100_REG2VAL(AV8100_GPIO_CONFIGURATION, DAT3VAL, __x)
#define AV8100_GPIO_CONFIGURATION_DAT2DIR_SHIFT 2
#define AV8100_GPIO_CONFIGURATION_DAT2DIR_MASK 0x00000004
#define AV8100_GPIO_CONFIGURATION_DAT2DIR(__x) \
	AV8100_VAL2REG(AV8100_GPIO_CONFIGURATION, DAT2DIR, __x)
#define AV8100_GPIO_CONFIGURATION_DAT2DIR_GET(__x) \
	AV8100_REG2VAL(AV8100_GPIO_CONFIGURATION, DAT2DIR, __x)
#define AV8100_GPIO_CONFIGURATION_DAT2VAL_SHIFT 3
#define AV8100_GPIO_CONFIGURATION_DAT2VAL_MASK 0x00000008
#define AV8100_GPIO_CONFIGURATION_DAT2VAL(__x) \
	AV8100_VAL2REG(AV8100_GPIO_CONFIGURATION, DAT2VAL, __x)
#define AV8100_GPIO_CONFIGURATION_DAT2VAL_GET(__x) \
	AV8100_REG2VAL(AV8100_GPIO_CONFIGURATION, DAT2VAL, __x)
#define AV8100_GPIO_CONFIGURATION_DAT1DIR_SHIFT 4
#define AV8100_GPIO_CONFIGURATION_DAT1DIR_MASK 0x00000010
#define AV8100_GPIO_CONFIGURATION_DAT1DIR(__x) \
	AV8100_VAL2REG(AV8100_GPIO_CONFIGURATION, DAT1DIR, __x)
#define AV8100_GPIO_CONFIGURATION_DAT1DIR_GET(__x) \
	AV8100_REG2VAL(AV8100_GPIO_CONFIGURATION, DAT1DIR, __x)
#define AV8100_GPIO_CONFIGURATION_DAT1VAL_SHIFT 5
#define AV8100_GPIO_CONFIGURATION_DAT1VAL_MASK 0x00000020
#define AV8100_GPIO_CONFIGURATION_DAT1VAL(__x) \
	AV8100_VAL2REG(AV8100_GPIO_CONFIGURATION, DAT1VAL, __x)
#define AV8100_GPIO_CONFIGURATION_DAT1VAL_GET(__x) \
	AV8100_REG2VAL(AV8100_GPIO_CONFIGURATION, DAT1VAL, __x)
#define AV8100_GPIO_CONFIGURATION_UCDBG_SHIFT 6
#define AV8100_GPIO_CONFIGURATION_UCDBG_MASK 0x00000040
#define AV8100_GPIO_CONFIGURATION_UCDBG(__x) \
	AV8100_VAL2REG(AV8100_GPIO_CONFIGURATION, UCDBG, __x)
#define AV8100_GPIO_CONFIGURATION_UCDBG_GET(__x) \
	AV8100_REG2VAL(AV8100_GPIO_CONFIGURATION, UCDBG, __x)
#define AV8100_GENERAL_CONTROL 0x00000008
#define AV8100_GENERAL_CONTROL_FDL_SHIFT 4
#define AV8100_GENERAL_CONTROL_FDL_MASK 0x00000010
#define AV8100_GENERAL_CONTROL_FDL_HIGH 1
#define AV8100_GENERAL_CONTROL_FDL_LOW 0
#define AV8100_GENERAL_CONTROL_FDL(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_CONTROL, FDL, __x)
#define AV8100_GENERAL_CONTROL_FDL_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_CONTROL, FDL, __x)
#define AV8100_GENERAL_CONTROL_HLD_SHIFT 5
#define AV8100_GENERAL_CONTROL_HLD_MASK 0x00000020
#define AV8100_GENERAL_CONTROL_HLD_HIGH 1
#define AV8100_GENERAL_CONTROL_HLD_LOW 0
#define AV8100_GENERAL_CONTROL_HLD(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_CONTROL, HLD, __x)
#define AV8100_GENERAL_CONTROL_HLD_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_CONTROL, HLD, __x)
#define AV8100_GENERAL_CONTROL_WA_SHIFT 6
#define AV8100_GENERAL_CONTROL_WA_MASK 0x00000040
#define AV8100_GENERAL_CONTROL_WA_HIGH 1
#define AV8100_GENERAL_CONTROL_WA_LOW 0
#define AV8100_GENERAL_CONTROL_WA(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_CONTROL, WA, __x)
#define AV8100_GENERAL_CONTROL_WA_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_CONTROL, WA, __x)
#define AV8100_GENERAL_CONTROL_RA_SHIFT 7
#define AV8100_GENERAL_CONTROL_RA_MASK 0x00000080
#define AV8100_GENERAL_CONTROL_RA_HIGH 1
#define AV8100_GENERAL_CONTROL_RA_LOW 0
#define AV8100_GENERAL_CONTROL_RA(__x) \
	AV8100_VAL2REG(AV8100_GENERAL_CONTROL, RA, __x)
#define AV8100_GENERAL_CONTROL_RA_GET(__x) \
	AV8100_REG2VAL(AV8100_GENERAL_CONTROL, RA, __x)
#define AV8100_REGISTER_B 0x0000000B
#define AV8100_REGISTER_B_ANCCI_SHIFT 5
#define AV8100_REGISTER_B_ANCCI_MASK 0x00000020
#define AV8100_REGISTER_B_ANCCI_HIGH 1
#define AV8100_REGISTER_B_ANCCI_LOW 0
#define AV8100_REGISTER_B_ANCCI_GET(__x) \
	AV8100_REG2VAL(AV8100_REGISTER_B, ANCCI, __x)
#define AV8100_REGISTER_8 0x00000008
#define AV8100_REGISTER_9 0x00000009
#define AV8100_REGISTER_D 0x0000000D
#define AV8100_FIRMWARE_DOWNLOAD_ENTRY 0x0000000F
#define AV8100_FIRMWARE_DOWNLOAD_ENTRY_MBYTE_CODE_ENTRY_SHIFT 0
#define AV8100_FIRMWARE_DOWNLOAD_ENTRY_MBYTE_CODE_ENTRY_MASK 0x000000FF
#define AV8100_FIRMWARE_DOWNLOAD_ENTRY_MBYTE_CODE_ENTRY(__x) \
	AV8100_VAL2REG(AV8100_FIRMWARE_DOWNLOAD_ENTRY, MBYTE_CODE_ENTRY, __x)
#define AV8100_FIRMWARE_DOWNLOAD_ENTRY_MBYTE_CODE_ENTRY_GET(__x) \
	AV8100_REG2VAL(AV8100_FIRMWARE_DOWNLOAD_ENTRY, MBYTE_CODE_ENTRY, __x)
