#ifndef __CONST_MESUREMENT__
#define __CONST_MESUREMENT__

#define USTUVANNJA_VAGA 12
#define DEFAULT_USTUVANNJA_VALUE ((1<<USTUVANNJA_VAGA) - 1)
#define AMPLITUDA_SECTOR_VAGA 7
#define AMPLITUDA_SECTOR      (1 << AMPLITUDA_SECTOR_VAGA)
#define AMPLITUDA_FI_VAGA     10
#define AMPLITUDA_FI          (1 << AMPLITUDA_FI_VAGA)

#define SECTOR1   10
#define POPRAVKA_NZZ  0/*-2*/
#define SECTOR2   5

#define SECTOR1_MTZ_TZNP   7
#define POPRAVKA_MTZ_TZNP  0/*3*/
#define SECTOR2_MTZ_TZNP   2

#define MEASUREMENT_TIM_FREQUENCY       60000000 //���

#define MAIN_FREQUENCY  50      //��
#define MIN_FREQUENCY   45      //��
#define MAX_FREQUENCY   55      //��

#define MIN_TICK_PERIOD (MEASUREMENT_TIM_FREQUENCY/MAX_FREQUENCY - 1)
#define MAX_TICK_PERIOD (MEASUREMENT_TIM_FREQUENCY/MIN_FREQUENCY + 1)

#define NUMBER_ADCs                     2
#define NUMBER_CANALs_ADC               16
#define NUMBER_INPUTs_ADCs              (NUMBER_ADCs*NUMBER_CANALs_ADC)

#define VAGA_NUMBER_POINT                5
#define NUMBER_POINT                     (1 << VAGA_NUMBER_POINT)

#define NUMBER_PERIOD_TRANSMIT           10

/*
����������, ���� ���������� ����� � ��� � ��
          K*2500
Koef = ------------
        R*1*0xFFF
��:
K - ���������� ������������� � �� ����� 500 ��� 3I0, ��� 2500 ��� ������ ������
2500 - ����������� �������� ������� � ���������, ��� ���� ���������� ��� (� ��� �� � 2,5 � = 2500 ��)
R - ��������, ���� ���������� ��������������� ����� � �������. ����� ����� 12,7 ��
1 - ���� ������������ ������ � ������� �� ������ ��� ������� ��������� ����� ��������� �� ������������ ���������� � ������������ ��������� "1"
0xFFF - ����������� �����, ��� ���� ������ ���

Koef = 24,035457106323248055531520098449 ��� 3I0 (1538/64 = 24,03125)
Koef = 120,17728553161624027765760049225 ��� ������ ������ (7691/64 = 120,171875) 

�������� �� �� ����������� ���������� ������� ��� � ��
������� ��� ����� ���������� ����� 3I0 � �������� �� ��������, ��� ������� ����
          K*25000
Koef = ------------
        R*1*0xFFF
��:
K - ���������� ������������� � �� ����� 500 ��� 3I0
25000 - ����������� �������� ������� � ������� �������, ��� ���� ���������� ��� (� ��� �� � 2,5 � = 2500,0 ��)
R - ��������, ���� ���������� ��������������� ����� � �������. ����� ����� 12,7 ��
1 - ���� ������������ ������ � ������� �� ������ ��� ������� ��������� ����� ��������� �� ������������ ���������� � ������������ ��������� "1"
0xFFF - ����������� �����, ��� ���� ������ ���

Koef* = 240,35457106323248055531520098449 ��� 3I0 ��� ��������� � ������� �������� (1923/8 = 240,375)

��� ���� �� ��������� ���������� � ��������� ������������ ���'�, �� ����������� � �������� 1-�  �������� (��� ����� ��������. ���� ���������� �� ���� �� ���)
���� ��� ����� ����������� ����� �� ������� �� ����� � ����.
��� �������� ������� ������������ ����������, �� � ����������� Koef_1 = Koef/sqrt(2)

Koef_1 = 16,995634708799561699038686560931 ��� 3I0 (1088/64 = 17)
Koef_1* = 169,95634708799561699038686560931 ��� 3I0  ��� 3I0 ��� ��������� � ������� �������� (170/1 = 170)
Koef_1 = 84,978173543997808495193432804655 ��� ������ ������ (5439/64 = 84,984375)
*/
#define MNOGNYK_3I0                   1538//1825           
#define VAGA_DILENNJA_3I0             6
//#define MNOGNYK_3I0_D                 1923          
//#define VAGA_DILENNJA_3I0_D           3
//#define MNOGNYK_3I0_DIJUCHE_D         170           
//#define VAGA_DILENNJA_3I0_DIJUCHE_D   0
#define MNOGNYK_3I0_DIJUCHE_D_mA         17           
#define VAGA_DILENNJA_3I0_DIJUCHE_D_mA   0
#define MNOGNYK_3I0_FLOAT               170.0f

#define MNOGNYK_I                     7691           
#define VAGA_DILENNJA_I               6
#define MNOGNYK_I_DIJUCHE             5439//6451          
#define VAGA_DILENNJA_I_DIJUCHE       6
#define MNOGNYK_I_DIJUCHE_DOUBLE       84.984375


/*
����������, ���� ���������� ����� � ��� � �B
          Ku*2500*R1
Koef = --------------
        R2*1*0xFFF
��:
Ku - ���������� ������������� � �� ����� 1
2500 - ����������� �������� ������� � ���������, ��� ���� ���������� ��� (� ��� �� � 2,5 � = 2500 ��)
R1 -  ��������, ���� ������� ����� � ��������� ������� ��������������� ������. ����� ����� 75 ���
R2 - ��������, ���� ���������� ��������������� ����� � �������. ����� ����� 499 ��
1 - ���� ������������ ������ � ������� �� ������ ��� ������� ��������� ����� ��������� �� ������������ ���������� � ������������ ��������� "1"
0xFFF - ����������� �����, ��� ���� ������ ���

Koef = 91,7586087926769289494740396544 (5872/64 = 91,75)

�������� �� �� ����������� ���������� ������� ��� � ��

��� ���� �� ��������� ���������� � ��������� ������������ ���'�, �� ����������� � �������� 1-�  �������� (��� ����� ��������. ���� ���������� �� ���� �� ���)
���� ��� ����� ����������� ����� �� ������� �� ����� � ����.
��� �������� ������� ������������ ����������, �� � ����������� Koef_1 = Koef/sqrt(2)

Koef_1 = 64,883134509545420915167731259667 (4152/64 = 64,875)
*/
#define MNOGNYK_U                     5896//5872           
#define VAGA_DILENNJA_U               6
#define MNOGNYK_U_DIJUCHE             4185//4153           
#define VAGA_DILENNJA_U_DIJUCHE       6
#define MNOGNYK_U_DIJUCHE_DOUBLE       65.390625

/*
��� ����� � �������������� �� �������� � ������� ��� � �������� ��������� � 16 ���
��� �������� ��(��) ����� ��������� ������������ ��������� �� ��������� ������������ ����������
      
��� ���������� ����� ������� ����������������� ���� (MNOGNYK_U_DIJUCHE; VAGA_DILENNJA_U_DIJUCHE)
� (MNOGNYK_I_DIJUCHE; VAGA_DILENNJA_I_DIJUCHE)
      
��� ������������ ����� � ��(��)
            ��
��� ������ -- �� �������� ���������� ��.
            �� 
      
�� ������ �������� ����� � �������� �� ���. ��� ��������� ����� ��������� �� 1000

����������� � ����� 769,44291230005515719801434087148 = 12311/16 (769,4375)
��� �� ���������� ����������� ��� ������� � ������ long long, �� � ��������� � ����� � ������ long long
*/
#define MNOGNYK_R_FLOAT                 769.44291230005515719801434087148f


#define MAX_INDEX_DATA_FOR_OSCYLOGRAPH  10

#define GND_NORMAL_VALUE                0x0
#define VREF_NORMAL_VALUE               0x800
#define VDD_NORMAL_VALUE                0xb00

//������
#define C_GND_ADC1_1            0
#define C_Ia_1                  1
#define C_Ia_16                 2
#define C_Ib_1                  3
#define C_Ib_16                 4
#define C_Ic_1                  5
#define C_Ic_16                 6
#define C_3I0_1                 7
#define C_3I0_16                8
#define C_3I0_256               9
#define C_GND_ADC1_2            10
#define C_GND_ADC1_3            11
#define C_GND_ADC1_4            12
#define C_GND_ADC1_5            13
#define C_VREF_ADC1             14
#define C_VDD_ADC1              15
#define C_GND_ADC2_1            (0  + NUMBER_CANALs_ADC)
#define C_3U0_1                 (1  + NUMBER_CANALs_ADC)
#define C_3U0_16                (2  + NUMBER_CANALs_ADC)
#define C_Uc_1                  (3  + NUMBER_CANALs_ADC)
#define C_Uc_16                 (4  + NUMBER_CANALs_ADC)
#define C_Ub_1                  (5  + NUMBER_CANALs_ADC)
#define C_Ub_16                 (6  + NUMBER_CANALs_ADC)
#define C_Ua_1                  (7  + NUMBER_CANALs_ADC)
#define C_Ua_16                 (8  + NUMBER_CANALs_ADC)
#define C_3U0_256               (9  + NUMBER_CANALs_ADC)
#define C_GND_ADC2_2            (10 + NUMBER_CANALs_ADC)
#define C_GND_ADC2_3            (11 + NUMBER_CANALs_ADC)
#define C_GND_ADC2_4            (12 + NUMBER_CANALs_ADC)
#define C_GND_ADC2_5            (13 + NUMBER_CANALs_ADC)
#define C_VREF_ADC2             (14 + NUMBER_CANALs_ADC)
#define C_VDD_ADC2              (15 + NUMBER_CANALs_ADC)

#define READ_3U0 (                    \
                  (1 << C_3U0_1  ) |  \
                  (1 << C_3U0_16 )    \
                 )

#define READ_Ua  (                     \
                  (1 << C_Ua_1   ) |   \
                  (1 << C_Ua_16  )     \
                 )

#define READ_Ub  (                     \
                  (1 << C_Ub_1   ) |   \
                  (1 << C_Ub_16  )     \
                       )

#define READ_Uc  (                     \
                  (1 << C_Uc_1   ) |   \
                  (1 << C_Uc_16  )     \
                 )

#define READ_I   (                     \
                  (1 << C_3I0_1  ) |   \
                  (1 << C_3I0_16 ) |   \
                  (1 << C_3I0_256) |   \
                  (1 << C_Ia_1   ) |   \
                  (1 << C_Ia_16  ) |   \
                  (1 << C_Ib_1   ) |   \
                  (1 << C_Ib_16  ) |   \
                  (1 << C_Ic_1   ) |   \
                  (1 << C_Ic_16  )     \
                 )

#define READ_DATA_VAL  (          \
                        READ_I  | \
                        READ_Ua | \
                        READ_Ub | \
                        READ_Uc | \
                        READ_3U0  \
                      )

#define READ_TEST_VAL  (                                  \
                        (1 << C_GND_ADC1_1)             | \
                        (1 << C_GND_ADC1_2)             | \
                        (1 << C_GND_ADC1_3)             | \
                        (1 << C_GND_ADC1_4)             | \
                        (1 << C_GND_ADC1_5)             | \
                        (1 << C_VREF_ADC1 )             | \
                        (1 << C_VDD_ADC1  )             | \
                        (1 << C_GND_ADC2_1)             | \
                        (1 << C_GND_ADC2_2)             | \
                        (1 << C_GND_ADC2_3)             | \
                        (1 << C_GND_ADC2_4)             | \
                        (1 << C_GND_ADC2_5)             | \
                        (1 << C_VREF_ADC2 )             |  \
          (unsigned int)(1 << C_VDD_ADC2  )                \
                       )

#define DATA_VAL_READ_BIT       0
#define DATA_VAL_READ           (1 << DATA_VAL_READ_BIT)
#define TEST_VAL_READ_BIT       1
#define TEST_VAL_READ           (1 << TEST_VAL_READ_BIT)

#define NUMBER_GND_ADC1         5
#define NUMBER_GND_ADC2         5

#define N_VAL_1                 0

#define I_3I0         0
#define I_Ia          1
#define I_Ib_I04      2
#define I_Ic          3
#define I_Ua          4
#define I_Ub          5
#define I_Uc          6
#define I_3U0         7

#define IM_3I0_i       0
#define IM_3I0         1
#define IM_3I0_other_g 2
#define IM_3I0_r       3
#define IM_IA          4
#define IM_IB          5
#define IM_IC          6
#define IM_I2          7
#define IM_I1          8
#define IM_I04         9
#define IM_UA          10
#define IM_UB          11
#define IM_UC          12
#define IM_3U0         13
#define IM_UAB         14
#define IM_UBC         15
#define IM_UCA         16

#define PORIG_FOR_FAPCH 10000

/*****************************************/
//��������� ��� ������ �������� �� ��1 � ��2
/*****************************************/
enum _PhK
{
INDEX_PhK_UA = 0,
INDEX_PhK_UB,
INDEX_PhK_UC,
INDEX_PhK_3U0,

MAX_INDEX_PhK
};
/*****************************************/

enum _full_ort_index
{
FULL_ORT_Ua = 0,
FULL_ORT_Ub,
FULL_ORT_Uc,
FULL_ORT_Uab,
FULL_ORT_Ubc,
FULL_ORT_Uca,
FULL_ORT_3U0,
FULL_ORT_Ia,
FULL_ORT_Ib,
FULL_ORT_Ic,
FULL_ORT_3I0,
FULL_ORT_3I0_r,
FULL_ORT_I04,

FULL_ORT_MAX
};

#define DIV_kWh         3600000000.0
#define PERIOD_SAVE_ENERGY_IN_MINUTES           30 /*��.*/
enum _index_energy
{
  INDEX_EA_PLUS = 0,
  INDEX_EA_MINUS,
  INDEX_ER_1,
  INDEX_ER_2,
  INDEX_ER_3,
  INDEX_ER_4,
  
  MAX_NUMBER_INDEXES_ENERGY
};

#define UNDEF_PHI                              (1 << 31)
#define UNDEF_RESISTANCE                       (1 << 31)
#define UNDEF_VMP                              (1 << 31)

enum _resistance_index
{
  R_AB = 0,
  X_AB,
  R_BC,
  X_BC,
  R_CA,
  X_CA,
  
  MAX_NUMBER_INDEXES_RESISTANCE,
};

#endif
