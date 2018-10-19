--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:52:23 10/18/2018
-- Design Name:   
-- Module Name:   /home/asalazar/Documents/VHDL/compteur8/test_diviseur.vhd
-- Project Name:  compteur8
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: diviseur
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_diviseur IS
END test_diviseur;
 
ARCHITECTURE behavior OF test_diviseur IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT diviseur
    PORT(
         divin : IN  std_logic;
         divrst : IN  std_logic;
         divout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal divin : std_logic := '0';
   signal divrst : std_logic := '0';

 	--Outputs
   signal divout : std_logic;

 
   constant divin_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: diviseur PORT MAP (
          divin => divin,
          divrst => divrst,
          divout => divout
        );

   -- Clock process definitions
   divin_process :process
   begin
		divin <= '0';
		wait for divin_period/2;
		divin <= '1';
		wait for divin_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

		divrst <= '1'; wait for divin_period*3;
		divrst <= '0'; wait for divin_period*3;
		wait for divin_period * 20;
		divrst <= '1';
		
		
      wait;
   end process;

END;
