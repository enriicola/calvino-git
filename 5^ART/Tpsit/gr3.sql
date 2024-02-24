-- phpMyAdmin SQL Dump
-- version 4.8.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Creato il: Mar 21, 2019 alle 07:41
-- Versione del server: 10.1.36-MariaDB
-- Versione PHP: 7.2.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `gr3`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `articoli`
--

CREATE TABLE `articoli` (
  `titolo` varchar(30) NOT NULL,
  `testo` text NOT NULL,
  `tempo` datetime NOT NULL,
  `utente` int(32) NOT NULL,
  `totlike` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struttura della tabella `commenti`
--

CREATE TABLE `commenti` (
  `tipo` varchar(8) NOT NULL,
  `testo` text NOT NULL,
  `articolo` varchar(20) NOT NULL,
  `data` varchar(20) NOT NULL,
  `utente` varchar(20) NOT NULL,
  `totlike` int(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struttura della tabella `golfisti`
--

CREATE TABLE `golfisti` (
  `email` varchar(20) NOT NULL,
  `password` varchar(32) NOT NULL,
  `nickname` varchar(10) NOT NULL,
  `totcommenti` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dump dei dati per la tabella `golfisti`
--

INSERT INTO `golfisti` (`email`, `password`, `nickname`, `totcommenti`) VALUES
('z@z.z', 'z', 'z', 0);

-- --------------------------------------------------------

--
-- Struttura della tabella `immagini`
--

CREATE TABLE `immagini` (
  `url` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
