#include "mock_Signal.h"
#include "Comunication.h"
#include "unity.h"








void setUp(void){}



void tearDown(void){}



void test_sendBitHigh_given_xxxx_should_xxxx(){

 setPinHigh_CMockExpect(13, 4);

 setPinLow_CMockExpect(14, 4);

 setPinHigh_CMockExpect(15, 4);

 sendBitHigh(4);

}

void test_sendBitLow_given_xxxx_should_xxxx(){

  setPinLow_CMockExpect(19, 4);

  setPinLow_CMockExpect(20, 4);

  setPinHigh_CMockExpect(21, 4);

  sendBitLow(4);

}

void test_readBit_given_xxxx_should_xxxx(){

    setPinHigh_CMockExpect(25, 4);

    setPinLow_CMockExpect(26, 4);

 readPin_CMockExpectAndReturn(27, 4, 0);

 readBit(4);





}



void test_writeData_given_0xCD_and_addr_0xDEAD_and_DATA_0xC0_should_send_0XCDDEADC0(void){



  setPinToOutput_CMockExpect(35, 4);

  setPinHigh_CMockExpect(36, 4);

  setPinLow_CMockExpect(37, 4);







  setPinHigh_CMockExpect(41, 4);

  setPinLow_CMockExpect(42, 4);

  setPinHigh_CMockExpect(43, 4);



  setPinLow_CMockExpect(45, 4);

  setPinLow_CMockExpect(46, 4);

  setPinHigh_CMockExpect(47, 4);



  setPinHigh_CMockExpect(49, 4);

  setPinLow_CMockExpect(50, 4);

  setPinHigh_CMockExpect(51, 4);



  setPinHigh_CMockExpect(53, 4);

  setPinLow_CMockExpect(54, 4);

  setPinHigh_CMockExpect(55, 4);



  setPinLow_CMockExpect(57, 4);

  setPinLow_CMockExpect(58, 4);

  setPinHigh_CMockExpect(59, 4);



  setPinLow_CMockExpect(61, 4);

  setPinLow_CMockExpect(62, 4);

  setPinHigh_CMockExpect(63, 4);



  setPinHigh_CMockExpect(65, 4);

  setPinLow_CMockExpect(66, 4);

  setPinHigh_CMockExpect(67, 4);



  setPinHigh_CMockExpect(69, 4);

  setPinLow_CMockExpect(70, 4);

  setPinHigh_CMockExpect(71, 4);



  setPinHigh_CMockExpect(73, 4);

 setPinLow_CMockExpect(74, 4);

  setPinHigh_CMockExpect(75, 4);



  setPinLow_CMockExpect(77, 4);

  setPinLow_CMockExpect(78, 4);

  setPinHigh_CMockExpect(79, 4);



  setPinHigh_CMockExpect(81, 4);

 setPinLow_CMockExpect(82, 4);

  setPinHigh_CMockExpect(83, 4);



  setPinHigh_CMockExpect(85, 4);

  setPinLow_CMockExpect(86, 4);

  setPinHigh_CMockExpect(87, 4);



  setPinLow_CMockExpect(89, 4);

  setPinLow_CMockExpect(90, 4);

  setPinHigh_CMockExpect(91, 4);



  setPinHigh_CMockExpect(93, 4);

 setPinLow_CMockExpect(94, 4);

  setPinHigh_CMockExpect(95, 4);



  setPinLow_CMockExpect(97, 4);

  setPinLow_CMockExpect(98, 4);

  setPinHigh_CMockExpect(99, 4);



  setPinHigh_CMockExpect(101, 4);

  setPinLow_CMockExpect(102, 4);

  setPinHigh_CMockExpect(103, 4);



  setPinLow_CMockExpect(105, 4);

  setPinLow_CMockExpect(106, 4);

  setPinHigh_CMockExpect(107, 4);



  setPinHigh_CMockExpect(109, 4);

  setPinLow_CMockExpect(110, 4);

  setPinHigh_CMockExpect(111, 4);



  setPinHigh_CMockExpect(113, 4);

  setPinLow_CMockExpect(114, 4);

  setPinHigh_CMockExpect(115, 4);



 setPinHigh_CMockExpect(117, 4);

  setPinLow_CMockExpect(118, 4);

  setPinHigh_CMockExpect(119, 4);



 setPinHigh_CMockExpect(121, 4);

  setPinLow_CMockExpect(122, 4);

  setPinHigh_CMockExpect(123, 4);



  setPinLow_CMockExpect(125, 4);

  setPinLow_CMockExpect(126, 4);

  setPinHigh_CMockExpect(127, 4);



  setPinHigh_CMockExpect(129, 4);

  setPinLow_CMockExpect(130, 4);

  setPinHigh_CMockExpect(131, 4);



  setPinHigh_CMockExpect(133, 4);

  setPinLow_CMockExpect(134, 4);

  setPinHigh_CMockExpect(135, 4);



  setPinLow_CMockExpect(137, 4);

  setPinLow_CMockExpect(138, 4);

  setPinHigh_CMockExpect(139, 4);



  setPinLow_CMockExpect(141, 4);

  setPinLow_CMockExpect(142, 4);

  setPinHigh_CMockExpect(143, 4);



  setPinLow_CMockExpect(145, 4);

  setPinLow_CMockExpect(146, 4);

  setPinHigh_CMockExpect(147, 4);



  setPinLow_CMockExpect(149, 4);

  setPinLow_CMockExpect(150, 4);

  setPinHigh_CMockExpect(151, 4);



  setPinLow_CMockExpect(153, 4);

  setPinLow_CMockExpect(154, 4);

  setPinHigh_CMockExpect(155, 4);



  setPinLow_CMockExpect(157, 4);

  setPinLow_CMockExpect(158, 4);

  setPinHigh_CMockExpect(159, 4);



  setPinHigh_CMockExpect(161, 4);

  setPinLow_CMockExpect(162, 4);

  setPinHigh_CMockExpect(163, 4);



  setPinHigh_CMockExpect(165, 4);

  setPinLow_CMockExpect(166, 4);

  setPinHigh_CMockExpect(167, 4);

 writeData(0xCD, 0xDEAD, 0xC0);



}



void test_readData_given_0xAB_and_addr_0XFACE_should_sent_0xABFACE_and_turnaround_and_receive_0xBE(void){





  setPinToOutput_CMockExpect(175, 4);

  setPinHigh_CMockExpect(176, 4);

  setPinLow_CMockExpect(177, 4);







  setPinHigh_CMockExpect(181, 4);

  setPinLow_CMockExpect(182, 4);

  setPinHigh_CMockExpect(183, 4);



  setPinHigh_CMockExpect(185, 4);

  setPinLow_CMockExpect(186, 4);

  setPinHigh_CMockExpect(187, 4);



  setPinLow_CMockExpect(189, 4);

  setPinLow_CMockExpect(190, 4);

  setPinHigh_CMockExpect(191, 4);



  setPinHigh_CMockExpect(193, 4);

  setPinLow_CMockExpect(194, 4);

  setPinHigh_CMockExpect(195, 4);



  setPinLow_CMockExpect(197, 4);

  setPinLow_CMockExpect(198, 4);

  setPinHigh_CMockExpect(199, 4);



  setPinHigh_CMockExpect(201, 4);

  setPinLow_CMockExpect(202, 4);

  setPinHigh_CMockExpect(203, 4);



  setPinLow_CMockExpect(205, 4);

  setPinLow_CMockExpect(206, 4);

  setPinHigh_CMockExpect(207, 4);



  setPinHigh_CMockExpect(209, 4);

  setPinLow_CMockExpect(210, 4);

  setPinHigh_CMockExpect(211, 4);





  setPinLow_CMockExpect(214, 4);

  setPinLow_CMockExpect(215, 4);

  setPinHigh_CMockExpect(216, 4);



  setPinHigh_CMockExpect(218, 4);

  setPinLow_CMockExpect(219, 4);

  setPinHigh_CMockExpect(220, 4);



  setPinHigh_CMockExpect(222, 4);

  setPinLow_CMockExpect(223, 4);

  setPinHigh_CMockExpect(224, 4);



  setPinHigh_CMockExpect(226, 4);

  setPinLow_CMockExpect(227, 4);

  setPinHigh_CMockExpect(228, 4);



  setPinLow_CMockExpect(230, 4);

  setPinLow_CMockExpect(231, 4);

  setPinHigh_CMockExpect(232, 4);



  setPinLow_CMockExpect(234, 4);

  setPinLow_CMockExpect(235, 4);

  setPinHigh_CMockExpect(236, 4);



  setPinHigh_CMockExpect(238, 4);

  setPinLow_CMockExpect(239, 4);

  setPinHigh_CMockExpect(240, 4);



  setPinHigh_CMockExpect(242, 4);

  setPinLow_CMockExpect(243, 4);

  setPinHigh_CMockExpect(244, 4);



  setPinLow_CMockExpect(246, 4);

  setPinLow_CMockExpect(247, 4);

  setPinHigh_CMockExpect(248, 4);



  setPinHigh_CMockExpect(250, 4);

  setPinLow_CMockExpect(251, 4);

  setPinHigh_CMockExpect(252, 4);



  setPinLow_CMockExpect(254, 4);

  setPinLow_CMockExpect(255, 4);

  setPinHigh_CMockExpect(256, 4);



  setPinHigh_CMockExpect(258, 4);

  setPinLow_CMockExpect(259, 4);

  setPinHigh_CMockExpect(260, 4);



  setPinHigh_CMockExpect(262, 4);

  setPinLow_CMockExpect(263, 4);

  setPinHigh_CMockExpect(264, 4);



  setPinHigh_CMockExpect(266, 4);

  setPinLow_CMockExpect(267, 4);

  setPinHigh_CMockExpect(268, 4);



  setPinHigh_CMockExpect(270, 4);

  setPinLow_CMockExpect(271, 4);

  setPinHigh_CMockExpect(272, 4);



  setPinHigh_CMockExpect(274, 4);

  setPinLow_CMockExpect(275, 4);

  setPinHigh_CMockExpect(276, 4);





  setPinToInput_CMockExpect(279, 4);

  setPinLow_CMockExpect(280, 4);

  setPinHigh_CMockExpect(281, 4);

  uint8_t getData = readData(0xAB,0xFACE);



}
