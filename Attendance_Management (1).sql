-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 25, 2024 at 08:34 PM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `2450_management`
--

-- --------------------------------------------------------

--
-- Table structure for table `2450_marksheet`
--

CREATE TABLE `2450_marksheet` (
  `grno :` int(11) NOT NULL,
  `stnm :` text NOT NULL,
  `classnm :` text NOT NULL,
  `m1 :` int(11) NOT NULL,
  `m2 :` int(11) NOT NULL,
  `m3 :` int(11) NOT NULL,
  `m4 :` int(11) NOT NULL,
  `m5 :` int(11) NOT NULL,
  `m6 :` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `2450_marksheet`
--

INSERT INTO `2450_marksheet` (`grno :`, `stnm :`, `classnm :`, `m1 :`, `m2 :`, `m3 :`, `m4 :`, `m5 :`, `m6 :`) VALUES
(2385, 'Bansi', 'B.C.A semester-2', 88, 97, 89, 97, 67, 53),
(2428, 'Dhruvi', 'B.C.A semester-2', 88, 67, 68, 56, 97, 53),
(2450, 'Nidhi', 'B.C.A semester-2', 88, 97, 89, 97, 97, 97),
(3477, 'gondaliya priya', 'B.C.A semester-1', 54, 6, 7, 8, 9, 9);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `2450_marksheet`
--
ALTER TABLE `2450_marksheet`
  ADD PRIMARY KEY (`grno :`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
